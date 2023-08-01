#include "header.h"
#define hrdwr_name_size 20
#define hrdwr_type_size 20
#define os_size 20

struct hardware{
	int serial_number;
	int rom_size;
	int ram_size;
	char *name;
	char *hardware_type;
	char *hrdwr_os;
	struct hardware *next;
};

extern struct hardware *hrdwr_head;
extern struct hardware *hrdwr_tail;
extern int num_of_hardware_count;

void add_hardware();
void display_hardware();
