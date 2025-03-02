/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaouri <souaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:15:58 by souaouri          #+#    #+#             */
/*   Updated: 2025/03/02 15:32:40 by souaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <vector>
#include "Channel.hpp"

#define ERR_NEEDMOREPARAMS 461
#define ERR_UNKNOWNCOMMAND 421
#define ERR_NOSUCHCHANNEL  403

std::vector<std::string>	split_output(std::string BUFFER);
void	exec_join_cmd(std::vector<std::string> BUFFER, Channelmanager &manager);
void	check_is_cmd_valid(std::vector<std::string> BUFFER, Channelmanager &manager);
void 	exec_kick_cmd(std::vector<std::string> BUFFER, Channelmanager& manager);
void	exec_privmsg_cmd(std::vector<std::string> BUFFER, Channelmanager& manager);
void	exec_quit_cmd(std::vector<std::string> BUFFER, Channelmanager &manager);