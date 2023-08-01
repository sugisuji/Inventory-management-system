#include "header.h"
#define sftwr_name_size 20
#define license_type_size 20
#define os_size 20

struct software{
	int serial_number;
	char *name;
	char *license_type;
	char *sftwr_os;
	struct software *next;
};

extern struct software *sftwr_head;
extern struct software *sftwr_tail;

void add_software();
void display_software();
