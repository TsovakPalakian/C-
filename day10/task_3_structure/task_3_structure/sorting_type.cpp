#include<string.h>
#include "te_struct.h"

bool _by_callers_name_asс(TelephoneExchange *pte, int i, int j) {
	return strcmp(pte[i].cal_person.name, pte[j].cal_person.name) > 0;
}
bool _by_callers_name_desс(TelephoneExchange *pte, int i, int j) {
	return strcmp(pte[i].cal_person.name, pte[j].cal_person.name) < 0;
}