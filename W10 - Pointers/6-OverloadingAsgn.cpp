StringClass &StringClass::operator=(const StringClass &rtSide)
{
	// Check for self-assignment
	if (this == &rtSide)
	{
		return *this; // If the right side is the same as the left side, return itself
	}
	else
	{
		// Copy data from the right side to the left side
		capacity = rtSide.capacity;
		length = rtSide.length;

		// Deallocate existing memory
		delete[] a;

		// Allocate new memory and copy data
		a = new char[capacity];
		for (int i = 0; i < length; i++)
		{
			a[i] = rtSide.a[i];
		}

		return *this; // Return the modified object
	}
}
