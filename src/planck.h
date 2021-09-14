#ifndef PLANCK
#define PLANCK

class Planck
{
	const float h;
	const float kB;
public:
	Planck(float,float);
	~Planck();
	float operator()(float,float);
};

#endif // PLANCK
