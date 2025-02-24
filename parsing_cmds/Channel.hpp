/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Channel.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaouri <souaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:57:14 by souaouri          #+#    #+#             */
/*   Updated: 2025/02/24 17:15:22 by souaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "User.hpp"
#include <iostream>
#include <vector>


class Channel{
	private:
		std::string name;
		std::string password;
		std::vector<std::string> Channels;
		std::vector<User*> members;
		std::vector<User*> operators;
	public:
		Channel(std::string new_name);
		std::string getName();
		void addMember(std::string nickname);
		void addOperator(std::string nickname);
		bool isOperator(User *user);
		// bool isMember(std::string nickname);
		bool removeMember(std::string nickname);
		void		print_members(){
			for (int i = 0; (size_t)i < members.size(); i++)
			{
				std::cout << "--->  member  :   " << members[i]->getNick() << std::endl;
			}
		};
};

class Channelmanager{
	private:
	public:
		std::vector<Channel*> Channels;
		Channel*	search_for_channel(std::string channel_name);
		Channel*	CreatChannel(std::string channel_name);
		void		print_channels(){
			for (int i = 0; (size_t)i < Channels.size(); i++)
			{
				std::cout << "--->  channel  :   " << Channels[i]->getName() << std::endl;
			}
		};
};

