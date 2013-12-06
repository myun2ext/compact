#ifndef __github_com_myun2__compact__type__base_HPP__
#define __github_com_myun2__compact__type__base_HPP__

namespace myun2
{
	namespace compact
	{
		namespace type
		{
			class base
			{
			public:
				virtual const void* serialize_value() const =0;
				virtual unsigned int size() const =0;
			};
		}
	}
}

#endif//__github_com_myun2__compact__type__base_HPP__
