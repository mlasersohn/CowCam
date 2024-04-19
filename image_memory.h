class	ImageMemory
{
public:
	std::vector<unsigned char>	buffer;
	void				*ptr;
	int				size;
	int				ready;
	int				done;
	int				ptz;
};
