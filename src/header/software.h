#include "../header/header.h"

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
void Delete_software();
void Update_software();
void display_software();
void Search_Software_by_name(char*);
void Filter_Software_with_OS(char*);
int check_case_sense(char*, char*);
