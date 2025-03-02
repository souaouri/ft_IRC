/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaouri <souaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:14:13 by souaouri          #+#    #+#             */
/*   Updated: 2025/03/02 15:32:18 by souaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.hpp"
#include "Channel.hpp"

std::vector<std::string>	split_output(std::string BUFFER)
{
	if (BUFFER.empty())
		exit (1);
	std::istringstream iss(BUFFER);
	std::string			word;
	std::vector<std::string>		words;
	while (iss >> word)
		words.push_back(word);
	return (words);
	// for (int i = 0; i < words.size(); ++i)
	// {
	// 	std::cout << words[i] << std::endl;
	// }
}

void	check_is_cmd_valid(std::vector<std::string> BUFFER, Channelmanager &manager)
{
	int 	i = 0;

	//std::cout << "=============>  :   " << BUFFER[0] << std::endl;
	if (BUFFER[i] == "JOIN")
	{
		exec_join_cmd(BUFFER, manager);
		i++;
	}
	else if (BUFFER[i] == "KICK")
	{
		exec_kick_cmd(BUFFER, manager);
		i++;
	}
	else if (BUFFER[i] == "PRIVMSG")
	{
		exec_privmsg_cmd(BUFFER, manager);
		i++;
	}
	else if (BUFFER[i] == "QUIT")
	{
		exec_quit_cmd(BUFFER, manager);
		i++;
	}
	else
	{
		std::cout << ERR_UNKNOWNCOMMAND << " " << BUFFER[i] << ":" << " Unknown command" << std::endl; // i need user name
	}
}