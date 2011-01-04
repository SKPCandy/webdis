#ifndef SLOG_H
#define SLOG_H

typedef enum {
	WEBDIS_ERROR,
	WEBDIS_WARNING,
	WEBDIS_NOTICE,
	WEBDIS_INFO,
	WEBDIS_DEBUG
} log_level;

struct server;

void slog(const struct server *s, log_level level, const char *body);

#endif
