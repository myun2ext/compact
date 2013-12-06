#ifndef __github_com_myun2__compact__type__string_HPP__
#define __github_com_myun2__compact__type__string_HPP__

#include <string>

namespace myun2
{
	namespace compact
	{
		namespace type
		{
			class string
			{
			private:
				typedef ::std::string impl_type;
				impl_type value;
			public:
				string(){}
				string(const ::std::string& s) : value(s) {}
				string(const const char* s) : value(s) {}
			};
		}
	}
}

#endif//__github_com_myun2__compact__type__string_HPP__
