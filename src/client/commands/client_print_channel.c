/*
** EPITECH PROJECT, 2020
** NWP_myteams_2019
** File description:
** 318
*/

#include "client.h"
#include "logging_client.h"

int cmd_318(char **tab)
{
    if (tab && tab[0] && tab[1] && tab[2])
        client_print_channel(tab[0], tab[1], tab[2]);
    return (0);
}