#include "Huffman.h"



int main()
{
	string fileLink;
	cout << "Enter file link - ";
	cin >> fileLink;
	EncodingHuffman myEncoding(fileLink);
	try
	{
		myEncoding.encoding();
		myEncoding.decoding();
	}
	catch (domain_error error)
	{
		cout << error.what();
	}
	
	return 0;
}