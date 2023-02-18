# include<stdio.h>

int salary_checker(int salary){
    if (salary > 600000)
    {
        return salary + (5/100 * salary);
        
    }else
    {
        return salary + (3/100 * salary);
    }
    
    
}

void main(){
    int salary = 100000;
    int ans = salary_checker(salary);
    printf("new salary of the employee is %d", ans);
}

