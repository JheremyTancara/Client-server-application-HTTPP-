#include "request_type.h"
#include <string.h>

enum RequestType parse_request_type(char *request_type) {
    if (strcmp(request_type, "GET") == 0) {
        return GET;
    } else if (strcmp(request_type, "POST") == 0) {
        return POST;
    } else if (strcmp(request_type, "PUT") == 0) {
        return PUT;
    } else {
        return UNKNOWN;
    }
}

char *request_type_to_string(enum RequestType request_type) {
    switch (request_type) {
    case GET:
        return "GET";
    case POST:
        return "POST";
    case PUT:
        return "PUT";
    default:
        return "UNKNOWN";
    }
}
