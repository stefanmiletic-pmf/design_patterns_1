#pragma once
class response {

public:
	std::string m_action_name;
	bool m_action;
	std::string m_response;

public:
    response(std::string action_name, bool action, std::string response): m_action_name(action_name), m_action(action), m_response(m_response){}
	
	friend ostream& operator<<(ostream& os, response const & rs) {
		
		if ( m_action ) {
			return os <<  m_action_name << " successfully completed \n"; 
		} else {
			return os <<  m_action_name << " can not be completed, response:  " << m_response << "\n";
		}
		
    }

};
