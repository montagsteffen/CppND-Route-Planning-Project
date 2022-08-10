#include <iostream>
#include <vector>
#include <string>
#include "compare.h"


bool Compare(RouteModel::Node *f1, RouteModel::Node *f2){
    return((f1->g_value + f1->h_value) > (f2->g_value + f2->h_value));
}