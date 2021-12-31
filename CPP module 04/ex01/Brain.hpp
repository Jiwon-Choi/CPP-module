#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

# include <iostream>
# include <string>

# define IDEA_SIZE 100

class Brain {
    private:
    std::string _ideas[IDEA_SIZE];

    public:
    Brain(void);
    Brain(const Brain& ref);
    ~Brain(void);

    Brain& operator=(const Brain& ref);

    void setIdeas(std::string str);
    const std::string& getIdea(int idx) const;
};

#endif
