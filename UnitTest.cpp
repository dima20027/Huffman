#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\hv200\Desktop\SCIENCE\Programms\4 sem - 2 prog\HuffmanEncoding\Huffman.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(testEncodingFileNotOpen)
		{
			string test = "hv200\\Desktop";
			try
			{
				EncodingHuffman myEncoding(test);
				myEncoding.encoding();
			}
			catch (domain_error error)
			{
				Assert::AreEqual("Domain error", error.what());
			}
		
		
		}

		TEST_METHOD(testDecodingMissingTree)
		{
			string test = "test.txt";
			try
			{
				EncodingHuffman myEncoding(test);
				myEncoding.decoding();
			}
			catch (out_of_range error)
			{
				Assert::AreEqual("Missing Decoding Tree", error.what());
			}


		}

		TEST_METHOD(Decoding)
		{
				string test = "C:\\Users\\hv200\\Desktop\\SCIENCE\\Programms\\4 sem - 2 prog\\HuffmanEncoding\\test.txt";
				EncodingHuffman myEncoding(test);
				myEncoding.encoding();
				myEncoding.decoding();
				fstream f("C:\\Users\\hv200\\Desktop\\SCIENCE\\Programms\\4 sem - 2 prog\\HuffmanEncoding\\text.txt", ios::in);
				char symb;
				f.get(symb);
				Assert::AreEqual('h',symb );
				f.get(symb);
				Assert::AreEqual('e', symb);
				f.get(symb);
				Assert::AreEqual('l', symb);
				f.get(symb);
				Assert::AreEqual('l', symb);
				//101100
		}
		TEST_METHOD(Encoding)
		{
			string test = "C:\\Users\\hv200\\Desktop\\SCIENCE\\Programms\\4 sem - 2 prog\\HuffmanEncoding\\test.txt";
			EncodingHuffman myEncoding(test);
			myEncoding.encoding();
			fstream f("C:\\Users\\hv200\\Desktop\\SCIENCE\\Programms\\4 sem - 2 prog\\HuffmanEncoding\\code.txt", ios::in);
			char symb;
			f.get(symb);
			Assert::AreEqual('1', symb);
			f.get(symb);
			Assert::AreEqual('0', symb);
			f.get(symb);
			Assert::AreEqual('1', symb);
			f.get(symb);
			Assert::AreEqual('1', symb);
			f.get(symb);
			Assert::AreEqual('0', symb);
			f.get(symb);
			Assert::AreEqual('0', symb);
			//101100
		}
	};
}
