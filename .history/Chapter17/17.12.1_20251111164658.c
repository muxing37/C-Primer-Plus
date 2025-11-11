//修改自17.2.c
#include <stdio.h>
#include <string.h>

#define TSIZE    45   /* 储存片名的数组大小 */
#define FMAX    5   /* 影片的最大数量 */

struct film {
    char title[TSIZE];
    int rating;
};

char * s_gets(char str[], int lim);
void forward(struct film movies[], int count);
void backward(struct film movies[], int count);

int main(void)
{
    struct film movies[FMAX];
    int i = 0;
    int j;

    puts("Enter first movie title:");
    while (i < FMAX && s_gets(movies[i].title, TSIZE) != NULL &&
        movies[i].title[0] != '\0')
    {
        puts("Enter your rating <0-10>:");
        scanf("%d", &movies[i++].rating);
        while (getchar() != '\n')
            continue;
        puts("Enter next movie title (empty line to stop):");
    }
    if (i == 0)
        printf("No data entered. ");
    else
        printf("Here is the movie list:\n");

    for (j = 0; j < i; j++)
        printf("Movie: %s Rating: %d\n", movies[j].title, movies[j].rating);
    
    printf("\n正序显示：\n");
    forward(movies,i);
    printf("\n逆序显示：\n");
    backward(movies,i);
    
    printf("Bye!\n");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n'); // 查找换行符
        if (find)    // 如果地址不是 NULL,
            *find = '\0';    // 在此处放置一个空字符
        else
            while (getchar() != '\n')
                continue;    // 处理剩余输入行
    }
    return ret_val;
}

void forward(struct film movies[], int i) {
    int j,t;
    for(j=0;j<i-1;j++) {
        for(t=0;t<i-j-1;t++) {
            if(strcmp(movies[t].title,movies[t+1].title)>0) {
                /*
                char temp[TSIZE];
                int te;
                strcpy(temp,movies[t].title);
                te=movies[t].rating;
                strcpy(movies[t].title,movies[t+1].title);
                movies[t].rating=movies[t+1].rating;
                strcpy(movies[t+1].title,temp);
                movies[t+1].rating=te;
                */
               Movie temp = movies[t];
            }
        }
    }
    for(j=0;j<i;j++) {
        printf("Movie: %s Rating: %d\n", movies[j].title, movies[j].rating);
    }
}

void backward(struct film movies[], int i) {
    int j;
    for (j = i - 1; j >= 0; j--) {
        printf("Movie: %s Rating: %d\n", movies[j].title, movies[j].rating);
    }
}