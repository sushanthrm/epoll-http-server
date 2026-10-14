#include <fcntl.h>
#include <iostream>
#include <unistd.h>

int main() {
    std::cout << "stdin  = " << STDIN_FILENO << '\n';
    std::cout << "stdout = " << STDOUT_FILENO << '\n';
    std::cout << "stderr = " << STDERR_FILENO << '\n';

    int fd = open("fd-demo.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);

    if (fd == -1) {
        perror("open");
        return 1;
    }

    std::cout << "File descriptor = " << fd << '\n';

    close(fd);
    return 0;
}