#include "../header/header.h"

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
void Delete_hardware();
void Update_hardware();
void display_hardware();
void Search_hardware_by_name(char*);
void Filter_Hardware_with_type(char*);
void Filter_Hardware_with_ROM(int);
void Filter_Hardware_with_RAM(int);
void Filter_Hardware_with_OS(char*);
