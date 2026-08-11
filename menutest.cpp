#include <iostream>
#include <vector>
#include <string>
#include <conio.h> // For _getch()

// ANSI Escape Codes for formatting
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_BG_BLUE       "\x1b[44m"
#define ANSI_STYLE_BOLD    "\x1b[1m"

// Key codes for Windows/conio
#define KEY_UP    72
#define KEY_DOWN  80
#define KEY_ENTER 13

void displayMenu(const std::vector<std::string>& options, int selectedIndex) {
    // Clear the screen using ANSI escape code
    std::cout << "\x1b[2J\x1b[H"; 
    
    std::cout << "=== INTERACTIVE MENU ===\n";
    std::cout << "(Use Up/Down arrows to navigate, Enter to select)\n\n";

    for (size_t i = 0; i < options.size(); ++i) {
        if (i == selectedIndex) {
            // Highlighted selection: Cyan text, Blue background, Bold
            std::cout << ANSI_COLOR_CYAN << ANSI_BG_BLUE << ANSI_STYLE_BOLD
                      << " > " << options[i] << " " 
                      << ANSI_COLOR_RESET << "\n";
        } else {
            // Normal option
            std::cout << "   " << options[i] << "\n";
        }
    }
}

int main() {
    std::vector<std::string> menuOptions = {
        "Start New Game",
        "Load Saved Game",
        "Options & Settings",
        "Credits",
        "Exit"
    };

    int selectedIndex = 0;
    bool running = true;

    while (running) {
        displayMenu(menuOptions, selectedIndex);

        int ch = _getch();

        // Check for arrow keys (which trigger a prefix 0 or 224)
        if (ch == 0 || ch == 224) {
            switch (_getch()) { // Read the actual key code
                case KEY_UP:
                    if (selectedIndex > 0) {
                        selectedIndex--;
                    } else {
                        selectedIndex = menuOptions.size() - 1; // Wrap around to bottom
                    }
                    break;
                case KEY_DOWN:
                    if (selectedIndex < menuOptions.size() - 1) {
                        selectedIndex++;
                    } else {
                        selectedIndex = 0; // Wrap around to top
                    }
                    break;
            }
        } 
        // Check for Enter key
        else if (ch == KEY_ENTER) {
            std::cout << "\n\n" << ANSI_STYLE_BOLD << "You selected: " 
                      << menuOptions[selectedIndex] << ANSI_COLOR_RESET << "\n";
            
            // Handle actions based on selection
            if (selectedIndex == 4) { // Exit option
                std::cout << "Goodbye!\n";
                running = false;
            } else {
                std::cout << "Press any key to return to the menu...";
                _getch(); // Pause so the user can see the result
            }
        }
    }

    return 0;
}