#include <stdio.h>
#include <string.h>

int main(void) {
  char str[100], words[100][100];
  gets(str);
  int i, wordnum=0, wordlen[100], j=0, k=0, con, easy=0, hard=0, len=strlen(str);

  for(i=0;i<len;i++) {
    if (str[i]==' ') {
      wordnum++;
      k=0;
    } else {
      words[wordnum][k] = str[i];
      wordlen[wordnum] = wordlen[wordnum]+1;
      k++;
    }
  }

  for(j=0;j<=wordnum;j++) {
    
    con=0;
    for(k=0;k<wordlen[j];k++) {
      if (words[j][k]=='a' || words[j][k]=='e' || words[j][k]=='i' || words[j][k]=='o' || words[j][k]=='u') {
        con=0;
      } else {
        con=con+1;
      }
      if(con==4) {
        hard=hard+1;
        break;
      }
    }
    
    if(k==wordlen[j] && con!=4) {
      easy=easy+1;
    }
  }
  printf("E%d D%d", easy, hard);
  return 0;
}
