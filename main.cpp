/*
 * @author: Christa Hatch
 * @Course: CS 151 - Advanced C++ Programming
 * @Date: 03/06/19
 *
 * Problem Statement: Pie A La Mode - In statistics the mode of a set of values is the value that occurs
 * the most often. Write a program that determines how many pieces of pie most people eat in a year.Set
 * up an integer array that can hold responses from 30 people. For each person, enter the number of pieces
 * they say they eat in the year. Then write a function that finds the mode of these 30 values. This will
 * be the number of pie slices eaten by the most people. The function that finds and returns the mode should
 * accept two arguments, an array of integers, and a value indicating how many elements are in the array.
 *
 * Program Title: ProgrammingChallenge5
 *
 * Algorithm:
 *  Methods:
 *      - mode(int[] arr, int size): Mode that takes an array of numbers and calculates the mode of the set
 *          -Create int [largest] and set to default value of 0
 *          - For [i] = 0 till [size] of [arr]
 *              - if [arr] at index [i] is smaller than [largest]
 *                  - Set [largest] equal to [arr] at index [i]
 *          - Return [largest]
 *  Main:
 *      - Create a constant int [SIZE] and set equal to 30
 *      - Create int [largest] and set to default value of 0
 *      - Create an int array [array] that holds [SIZE] number of ints
 *      - Fill [SIZE] - 1 spots of the array
 *      - Create int [temp] and set to default value
 *      - Ask user to enter an int for the number of pie slices eaten
 *      - Read user response into [temp]
 *      - If [temp] is negative, multiply by -1 to make positive
 *      - Fill the last index of the array to the value of [temp]
 *      - Use method mode() with parameters [array] and [SIZE] and give the
 *        value to [largest]
 *      - Print result to user
 *      - End Program
 */


#include <iostream>

using namespace std;

int mode( int[], int);

const int SIZE =  30;

int main() {
    int largest = 0;
    int array[SIZE];
    int temp = 0;

    for( int i = 0; i < SIZE - 1; i++){
        array[i] = i % (SIZE / 2);
    }

    cout << "Enter the number of pie pieces that you eat in a year: " << endl << endl;
    cin >> temp;
    if(temp < 0){
        temp *= -1;
    }
    array[SIZE - 1] = temp;
    largest = mode(array, SIZE);
    cout << "The most pie pieces that people have eaten in a year is " << largest << endl;

    return 0;
}

int mode( int arr[], int size){
    int largest = 0;
    for( int i = 0; i < size; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }

    return largest;
}

