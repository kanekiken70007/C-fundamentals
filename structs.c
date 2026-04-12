#include <stdio.h>

struct book {
    char title[30];
    char author[50];
    int year;
    float price;
    
};


void print_book(struct book x){
printf("Title: %s\n",x.title);
printf("Author: %s\n",x.author);
printf("Year: %d\n",x.year);
printf("Price: %f\n",x.price);

}


void apply_discount(struct book *x, float percent){

x->price = (x->price)-(x->price)*percent;

}



int is_expensive(struct book x){
    if(x.price>20){
        return 1;
    } else {
        return 0;
    }
}



int main(void){



struct book george = {"1984", "George Orwell", 1949, 15.99};

struct book book2;

printf("Give the title of the book\n");
scanf("%s",(book2.title));
printf("Give the author of the book\n");
scanf("%s",(book2.author));
printf("Give the year the book was written\n");
scanf("%d",&book2.year);
printf("Give the price of the book\n");
scanf("%f",&book2.price);



print_book(george);
print_book(book2);


apply_discount(&book2,0.1);

printf("After 10%% discount: $%f\n",book2.price);


if (is_expensive(george) == 0) {
    printf("Book 1 : Cheap\n");
} else {
    printf("Book 1 : Expensive\n");
}

if (is_expensive(book2) == 0) {
    printf("Book 2: Cheap\n");
} else {
    printf("Book 2: Expensive\n");
}



}