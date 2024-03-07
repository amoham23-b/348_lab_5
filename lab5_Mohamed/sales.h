#include <stdio.h>
void read_sample(double*sales){
    FILE* my_file= fopen("input.txt","r");
    for(int i= 0; i<12;++i){
        fscanf(my_file,"%lf",&sales[i]);
    }
    fclose(my_file);

}
double find_min(double *sales, int *min_month) {
    double min_value = sales[0];
    *min_month = 0;

    for (int i = 0; i < 12; ++i) {
        if (sales[i] < min_value) {
            min_value = sales[i];
            *min_month = i;
        }
    }
    return min_value;
}
double find_max(double *sales, int *max_month) {
    double max_value = sales[0];
    *max_month = 0;

    for (int i = 0; i < 12; ++i) {
        if (sales[i] > max_value) {
            max_value = sales[i];
            *max_month = i;
        }
    }
    return max_value;
}

double find_avg(double *sales) {
    double total= 0;
    for (int i = 0; i < 12; ++i) {
        total+=sales[i];
        }
    return total/12;
    }


void six_avg(char* months[],double *sales ){
    int six_avg= 7;
    for(int i=0; i<six_avg; ++i){
        double sum = 0;
        for(int j= i; j<=six_avg+i-2; ++j){
            sum+= sales[j];
        }
        double sixavg= sum/6;
        printf("%-9s - %-10s $%.2lf\n", months[i],months[six_avg+i-2],sixavg);
    } 
    printf("\n");
}
void high_to_low(double *sales,char *months[]){
    for(int i = 0;i < 12; ++i){
        for (int j = i+1; j<12; j++){
            if (sales[j] > sales[i]){
                double temp_sales = sales[i];
                sales[i] =  sales[j];
                sales[j] = temp_sales;


                char *temp_month= months[i];
                months[i]= months[j];
                months[j]= temp_month;

            }
        
        }
    } 

    for(int a= 0;a < 12; ++a){
        printf("%-10s $%.2lf \n", months[a],sales[a]);
    }

}

