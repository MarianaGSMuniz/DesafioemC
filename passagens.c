#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{

  int voo[37][10];
  int "i,  j";
  int num_voo =  i, j, nunca, lugvazios[37][10];
  char doc[11];
  for (i=0;i<37;i++) 
  {
    for(j=0;j<10;j++)
    {
        voo[i][j] = 0;
    }
  }
  do {
       printf("Digite o numero do voo(0-36) que quer compar a passagem: "); 
       scanf("%d",&num_voo);
       printf("\nLugares disponiveis do voo %d\n\n",num_voo);
    for (i=0;i<10;i++)
    {
       if(voo[num_voo][i] == 0 ) 
       {
        lugvazios[num_voo][i] = i;
        printf("%d  ",lugvazios[num_voo][i]);
       }
    }
        printf("\n\nDigite o numero da poltrona: ");
         scanf("%d",nunca);
        printf("Digite o numero da identidade: ");
         scanf("%s",&doc);
        voo[num_voo][i] = 1;
        printf("\n\nCadeira %d comprada com sucesso!!!");
        printf("\nVoo %d",num_voo);
        printf("\nComprador = %s",doc);
        printf("\n\n\n");
        system("pause"); clrscr();
  } while(strcmp(doc, "9999"));
  getch();
}