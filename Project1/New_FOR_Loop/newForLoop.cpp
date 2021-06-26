
#include<iostream>


int main()
{
	//Range based for loop
	int arr[]{ 1,2,3,4,5 };

	for (const auto & x : arr)
	{
		std::cout << x << "\t";
	}


	//Using begin and end pointeres
	int arr2[] = { 11,12,13,14,15,16,17,18,19 };
	int* begin_ptr = std::begin(arr2);
	int* end_ptr = std::end(arr2);

	while (begin_ptr != end_ptr)
	{
		std::cout << *begin_ptr <<"\t" ;
		begin_ptr++;
	}

	//Range based for loop explanation
	std::cout << "\n Explanation of Range based for loop \n";
	auto&& range2 = { 21,22,23,24,25,26 }; // Forwarding reference to allow l-vale and r-value
	auto&& range = arr2; // Forwarding reference to allow l-vale and r-value
	auto begin_pos = std::begin(range);
	auto end_pos = std::end(range);

	for (; begin_pos != end_pos; begin_pos++)
	{
		std::cout << *begin_pos << "\t";
	}

	return 0;
}

