#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <poll.h>
#include <errno.h>
#include <fcntl.h>

#define PORT 8080
#define BUFFER_SIZE 1024

void flush_socket(int sock);
