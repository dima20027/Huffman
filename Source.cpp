#include "Huffman.h"



int main()
{
	string fileLink;
	cout << "Enter file link - ";
	cin >> fileLink;
	EncodingHuffman myEncoding(fileLink);
	myEncoding.encoding();
	myEncoding.decoding();
	return 0;
}