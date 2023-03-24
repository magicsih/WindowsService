# Windows Service Template

This repository provides a C++ template for creating a Windows Service, with the necessary files to install, uninstall, and control the service.

## Features

- C++ Windows Service template
- Service Installer for easy installation and removal
- Base classes for creating custom Windows Services
- Logging and error handling

## Files

- **WindowsService.cpp**: Main file containing the `wmain` function to install, uninstall, or run the service.
- **WindowsService.h**: Header file for the `CWindowsServiceImpl` class derived from `CServiceBase`.
- **ServiceBase.h**: Header file for the `CServiceBase` class, which provides a base class for a service that will exist as part of a service application.

## Usage

1. Clone the repository and navigate to the project directory.
2. Customize the `CWindowsServiceImpl` class in `WindowsService.h` to implement your desired service behavior.
3. Compile the project with your preferred C++ compiler.
4. Install the service by running the compiled executable with the `-install` or `/install` parameter: ```<your_executable_name> -install```
5. Remove the service by running the compiled executable with the `-remove` or `/remove` parameter: ```<your_executable_name> -remove```
6. Start, stop, or control the service using the Windows Services control panel or command-line tools like `sc` or `net`.

## License

This project is open source and available under the [MIT License](LICENSE).
