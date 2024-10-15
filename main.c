/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsl <wsl@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:10:25 by wsl               #+#    #+#             */
/*   Updated: 2024/10/10 18:19:21 by wsl              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *str, int c);

#include <stdio.h>
int main(void)
{
    char *frase = "abcdefg";
    int ch = 'e';
    char *res = ft_strchr(frase, ch);
    printf("char_%c", *res);
}
