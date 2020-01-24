/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_small_numbers.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 12:55:49 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/23 13:05:36 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void print2Smallest(int arr[], int arr_size)
{
    int i, first, second;

    /* There should be atleast two elements */
    if (arr_size < 2)
    {
        cout<<" Invalid Input ";
        return;
    }

    first = second = INT_MAX;
    for (i = 0; i < arr_size ; i ++)
    {
        /* If current element is smaller than first
        then update both first and second */
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }

        /* If arr[i] is in between first and second
        then update second */
        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MAX)
        cout << "There is no second smallest element\n";
    else
        cout << "The smallest element is " << first << " and second "
            "Smallest element is " << second << endl;
}

/* Driver code */
int main()
{
//    int arr[] = {12, 13, 1, 10, 34, 1};	
    int arr[] = {10, 9, 8, 7, 6, 5, 5};
//	int arr[] = {5, 6, 7, 8, 9, 10};
	printf("%lu\n", sizeof(arr));
	printf("%lu\n", sizeof(arr[0]));
	int n = sizeof(arr)/sizeof(arr[0]);
    print2Smallest(arr, n);
    return 0;
}

// This is code is contributed by rathbhupendra

