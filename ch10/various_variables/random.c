#define SEED 17

int MULT = 25173;   // gloabl variable
int INC = 13849;    // global variable
int MOD = 65536;    // global variable

static unsigned int seed = SEED;    // static global variable

// integer random number
unsigned random_i(void){
    seed = (MULT*seed + INC) % MOD;
    return seed;
}

// floating-point random number
double random_f(void){
    seed = (MULT*seed + INC) % MOD;
    return seed / (double) MOD;
}
