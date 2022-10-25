/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
main(){
    int x,y,z;
    printf("DIGITE UM NUMERO:\n");
    scanf("%d",&x);
    printf("DIGITE UM OUTRO NUMERO:\n");
    scanf("%d",&y);
    
    z=somar(x,y);
    printf("SOMA:%d\n",z);
    
    z=subtrair(x,y);
    printf("SUBTRAIR:%d\n",z);
    
    z=multiplicacao(x,y);
    printf("MULTIPLICACAO:%d\n",z);
    
    z=divisao(x,y);
    printf("DIVISAO:%d\n",z);
}
int somar(x,y){
    int z=x+y;
    return(z);
}
int subtrair(x,y){
    int z=x-y;
    return(z);
}
int multiplicacao(x,y){
    int z=x*y;
    return(z);
}
int divisao(x,y){
    int z=x/y;
    return(z);
}

