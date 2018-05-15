int better_than_average(int class_points[], int class_size, int your_points) {
    int temp = 0, age = 0;

    for(int i = 0; i < class_size; i++){
        temp += class_points[i];
    }
    age = temp/class_size;
    
    return  your_points > age;
}