#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
	private:
	std::string ideas[100];

	public:
	void getIdeas() const;
	Brain(std::string idea);
	Brain();
	~Brain();
	Brain(const Brain &brain);
	Brain &operator=(const Brain &brain);
};

#endif
