#include<stdio.h>

char str[1005],mark_v[100005],mark_con[100005],mark_w[100005],mark_d[100005],mark_char[100005],vowelword[10005],consonentword[1005],mark_o[10005],vo,digit_word[1005],voewl_word[1005],consonent_word[1005],word_arr[1005],char_word[1005],other_word[1005];
int i,cnt_word=1,cnt_char=0,x,cnt_digit=0,cnt_voewl=0,cnt_consonent=0,other=0,inc=0,ind=0,inv=0,incon=0,inw=0,ino=0,vowelwordin=0,consonentwordin=0;

int is_digit(char ch)
{
    if(ch>='0' && ch<='9')
        return 1;
    return 0;

}
int is_char(char ch)
{
    if(ch>='a' && ch<='z')
        return 1;
    if(ch>='A' && ch<='Z')
        return 1;
    return 0;
}
int is_vowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') return 1;

    return 0;
}
void cnt()
{
    for(i=0;str[i];i++)
    {
        x=(int)str[i];

        if(str[i]==' ' && (is_char(str[i+1]) || is_digit(str[i+1])))
        {
            cnt_word++;
        }

        if(is_char(str[i]))
        {
            cnt_char++;
            if(is_char(str[i]) && !mark_char[x])
            {
                 char_word[inc++]=str[i];
                 char_word[inc++]=' ';
                 mark_char[x]=1;
            }


        }
        if(is_digit(str[i]))
        {

            cnt_digit++;
            if(is_digit(str[i]) && !mark_d[x])
            {
                 digit_word[ind++]=str[i];
                digit_word[ind++]=' ';
                 mark_d[x]=1;
            }


        }
        if(!is_digit(str[i])&&!is_char(str[i])){
            other++;
            if(!is_digit(str[i])&&!is_char(str[i])&&!mark_o[x]){
            other_word[ino++] = str[i];
            other_word[ino++] = ' ';
            mark_o[x] = 1;
            }
        }
        if(is_vowel(str[i]))
        {
            cnt_voewl++;
            if(!mark_v[x])
            {
                 voewl_word[inv++]=str[i];
                 mark_v[x]=1;
            }

        }
        else if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
        {
            cnt_consonent++;
             if(!mark_con[x])
            {
                 consonent_word[incon++]=str[i];
                 mark_con[x]=1;
            }
        }
        char_word[inc]='\0';
       // voewl_word[inv]='\0';
        digit_word[ind]='\0';
        other_word[ino]='\0';

    }

    printf("\n\nNumbers of words : %d\n",cnt_word);
    printf("Numbers of letters : %d\n",cnt_char);
    printf("Numbers of digit : %d\n",cnt_digit);
    printf("Numbers of Other char : %d\n",other);
    printf("Separated letters : %s\n",char_word);
    printf("Separated digits : %s\n",digit_word);
    printf("Separated others : %s\n",other_word);
     printf("Numbers of VOWELS : %d\n",cnt_voewl);
    printf("Numbers of CONSONANTS : %d\n",cnt_consonent);
    printf("Vowels : ");
    for(i=0;i<inv;i++){
        printf("%c ",voewl_word[i]);
    }
    printf("\nConsonants :");
    for(i=0;i<inc;i++){
        printf("%c ",consonent_word[i]);
    }


}
void separateword(){

    for(i=0;str[i];i++){
        if(is_vowel(str[i])){
            while(str[i]!=' '&&str[i]!='\0'){
                vowelword[vowelwordin++] = str[i++];
            }
            vowelword[vowelwordin++]  = ' ';
        }
        else if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'){
            while(str[i]!=' '&&str[i]!='\0'){
                consonentword[consonentwordin++] = str[i++];
            }
            consonentword[consonentwordin++]  = ' ';
        }
    }
    vowelword[vowelwordin] = '\0';
    consonentword[consonentwordin] = '\0';
    printf("\n\nWords started with vowel : %s\n",vowelword);
    printf("Words started with consonant : %s\n",consonentword);
}

int main()
{

    freopen("input.txt","r",stdin);
    scanf("%[^\n]",str);
    printf("The input string is\n %s ",str);
    cnt();
    separateword();




}
