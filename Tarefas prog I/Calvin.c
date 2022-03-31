#include <stdio.h>
//Programa que imprime um desenho do calvin feito apenas com simbolos a partir da função printf
// Os simbolos usados são: Cifrão ($), Aspas duplas (") e a Letra (o)

int main() { //cada função print corresponde a uma linha do desenho
    printf("%33c$o\n", 'o');
    printf("%33c  \"%c%9c$o\n", '$', 'o', 'o');
    printf("%18c%15c    \"%c%6c\" \"%c   %c\n", 'o', '$', 'o', 'o', 'o', 'o');
    printf("%18c%c%c\"\"\"ooooo%5c%7co  o\"%4co $ $  $\n", '"', '$', '$', '$', '"', '"');
    printf("%20c$oo    \"\"$o $        \"o\"     \"o\" \"o $      oo\n", '"'); //linha 5
    printf("%23c\"\"oo   \"\"$o %8c\" %6c   \"o$o oo\"\"  $\n", '"', '"', '"');
    printf("%27c$oo   \" %19c\"\" \"\"   ooo$\n", '"', '$');
    printf("%19coooooooo    oooooo\"\"\"\" %11c   o %7c\"\"\"oo\n", 'o', '$', '"');
    printf("%10c\"\"\"\"\"\"\"\" %8c\" %24c   $$  $  \"ooo  $\n", '"', '"', '$');
    printf("%18c %26c\"\"oo  $   o\" $o\"$   $ \"\"\n", 'o', '"'); //linha 10
    printf("%10cooooo$\"$\"\"\"\"\"\" %20coo   o\"   $     \"ooo\"\n", 'o', 'o');
    printf("%18c %29c o$   $\n", '$', '"');
    printf("%18c %25coo$$$$\"  o\"\"\"o\n", '$', 'o');
    printf("%18c %10coooooo  ooo$$$\"\"\"o$\"$   $   $\n", '$', 'o');
    printf("%18co %6co$\"ooooo$$$\"\"\"   oooo o\"  o\"   $\n", '"', 'o'); //linha 15
    printf("%18c$o\"\"\"$o$$$\"\"\"$$$$$      o\"   \"\"\"\"\"$oo$\"\n",'o');
    printf("%17coo$$$\"$$\"$$   $$$$$      $oo           \"$\"\n", '$');
    printf("%17c$$$$  $$o$$$$$$$$\"      $   \"\"\"\"oooo   o\"\n", '$');
    printf("%18c$$$$$$\"   \"\"\"\"\"  oo    $o          \"\"$\n", '$');
    printf("%19c$\"\" $            $   $  \"\"\"oo      $\n", '"'); //linha 20
    printf("%20c   \"\"ooo\"\"     o\"  o\"\"oo    \"\"\"oo\"\n", '$');
    printf("%20c            oo\"    $    \"\"\"oo  o\"\n", '$');
    printf("         oooooo    $       \"\"\"\"\"      \"\"oo       $\"\n");
    printf("     o\"\"\"     \"\"o   $oo       ooooo\"\"\"    \"\"\"oo  $\n");
    printf("     $oo\"\" o\"   \"o     \"$$$\"\"\"     \"\"\"ooo      $\"\n"); //linha 25
    printf("     o\"   $   $  \"o   o\"o  \"\"\"oooo       \"\"oo  $\n");
    printf("     $   $$  o\"o  \"o $ $          \"\"\"ooo     \"$\n");
    printf("      \"\"\"  \"\"  $    \"\"o$                \"\"\"\"oo\"\n");
    printf("%17c   o $\"\"\"\"\"\"\"\"\"\"\"ooooooo    $\n", '$');
    printf("%18co\" o\"                 \"\"$o$\n", '"'); //linha 30
    printf("%22c\"\"\"\"\"\"\"\"\"\"$oooo       $\n", '$');
    printf("%22c              \"\"\"$oo  $\n", '$');
    printf("%22c\"\"\"\"\"\"\"oooooooooo  \"\"\"$\n", '$');
    printf("%22c                 \"\"\"oo$\n", '$');
    printf("%22c\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"oooo  $\n", '$'); //linha 35
    printf("%23c   oooooooooooo    \"o $\n", '$');
    printf("%23c\"\"\"oooooooooooo\"\"\"\"oo$$oo\n", '$');
    printf("%24c$$$$$$$$$$$$$$$$$$o$$$$$o$\"\"$o\n", 'o');
    printf("%24c$$$$$$$$$$$$$$$$$$$$$$$$$o   $\n", '$');
    printf("%25c$$$$$$$$$$$$$$$$$$$$$$\" o\"  $\n", '"'); //linha 40
    printf("%28c$$$$$$$$$$$$$$$$$$\"o\"  o$\n", '"');
    printf("%29c\"ooooo\"\"\"$\"oooooo\"   \"\"\n", '$');
    printf("%30c       $          $\n", '$');
    printf("%31co      $o      o\"\n", '$');
    printf("               $$$$$$$$$$$$$$$$\"$ooo$\"\" \"ooo\"\"$$$$$$$$$$$$$$$$$$$$$$$$$$\"         Fonte: http://bit.ly/2W7Udd7\n"); //linha 45
    return 0;
}