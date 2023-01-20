#include "random.h"  

char random(){
    return 'A' + (random() %26);
}