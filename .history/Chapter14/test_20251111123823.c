#include <stdio.h>
#define CSIZE 4

// a. 定义name结构模板
struct name {
    char first[20];
    char last[20];
};

// b. 定义student结构模板
struct student {
    struct name student_name;
    float grade[3];
    float average;
};

// 函数声明
void get_grades(struct student students[]);
void calculate_averages(struct student students[]);
void print_students(struct student students[]);
float class_average(struct student students[]);

int main() {
    // c. 声明并初始化学生数组
    struct student students[CSIZE] = {
        {{"Alice", "Smith"}},
        {{"Bob", "Johnson"}},
        {{"Charlie", "Brown"}},
        {{"Diana", "Lee"}}
    };
    
    // d. 获取成绩
    get_grades(students);
    
    // e. 计算平均分
    calculate_averages(students);
    
    // f. 打印学生信息
    print_students(students);
    
    // g. 打印班级平均分
    printf("\n班级平均分: %.2f\n", class_average(students));
    
    return 0;
}

// d. 交互获取成绩
void get_grades(struct student students[]) {
    for (int i = 0; i < CSIZE; i++) {
        printf("请输入 %s %s 的3个分数: ", 
               students[i].student_name.first, 
               students[i].student_name.last);
        scanf("%f %f %f", 
              &students[i].grade[0], 
              &students[i].grade[1], 
              &students[i].grade[2]);
    }
}

// e. 计算每个学生的平均分
void calculate_averages(struct student students[]) {
    for (int i = 0; i < CSIZE; i++) {
        float sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += students[i].grade[j];
        }
        students[i].average = sum / 3;
    }
}

// f. 打印学生信息
void print_students(struct student students[]) {
    printf("\n学生信息:\n");
    for (int i = 0; i < CSIZE; i++) {
        printf("%s %s: 分数=%.1f,%.1f,%.1f, 平均分=%.2f\n",
               students[i].student_name.first,
               students[i].student_name.last,
               students[i].grade[0],
               students[i].grade[1],
               students[i].grade[2],
               students[i].average);
    }
}

// g. 计算班级平均分
float class_average(struct student students[]) {
    float total = 0;
    for (int i = 0; i < CSIZE; i++) {
        total += students[i].average;
    }
    return total / CSIZE;
}