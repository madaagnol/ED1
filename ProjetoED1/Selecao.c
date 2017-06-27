L_Geral* SelecaoPilha(L_Geral *cab,int v)
{

	int menu,contador_percorre=1,resp;
	L_Geral *aux=cab;
	while (contador_percorre<v)
	{
		if(aux->flag=='1')
			contador_percorre++;

		aux=aux->prox;
	}

	returnmenu: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - Pilha %s\n",aux->nome);
	printf("________________________________________________________\n\n");

	printf("Selecione a opção a ser manipulada:\n");
	printf("\t1 - Inserir na Pilha\n");
	printf("\t2 - Excluir  da Pilha\n");
	printf("\t3 - Exibir Pilha\n");
	printf("\t0 - Voltar\n");
	printf("\nOpção: ");
	scanf("%d", &menu);

	switch(menu)
	{
		case 0:
			return cab;
		break;

		case 1:
			printf("\n________________________________________________________\n\n");
			printf("\tDigite o numero a ser inserido na pilha %s: ", aux->nome);
			fflush(stdin);
			scanf("%d", &resp);

			aux->estrutura.pilha=InserirPilha(aux->estrutura.pilha, resp);

		break;

		case 2:
			printf("________________________________________________________\n\n");
			ImprimirPilha(aux->estrutura.pilha);
			printf("\n\n________________________________________________________\n\n");

			printf("\tDigite o item que deseja excluir:\n");
			scanf("%d",&resp);
			//aux->estrutura.pilha=RetiraPilha(aux->estrutura.pilha,resp);
		break;

		case 3:
		printf("\n\tPilha %s: ",aux->nome);
			ImprimirPilha(aux->estrutura.pilha);
			getch();
		break;

		default:
		break;

	}
	goto returnmenu;
}


L_Geral* SelecaoFila(L_Geral *cab,int v)
{

	int menu,contador_percorre=1,resp;
	L_Geral *aux=cab;
	while (contador_percorre<v)
	{
	    if(aux->flag=='1')
	        contador_percorre++;

	    aux=aux->prox;
	}

	returnmenu: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - Fila %s\n",aux->nome);
	printf("________________________________________________________\n\n");

	printf("Selecione a opção a ser manipulada:\n");
	printf("\t1 - Inserir na Fila\n");
	printf("\t2 - Excluir  da Fila\n");
	printf("\t3 - Exibir Fila\n");
	printf("\t0 - Voltar\n");
	printf("\nOpção: ");
	scanf("%d", &menu);

	switch(menu)
	{
	    case 0:
	        return cab;
	    break;

	    case 1:
	        printf("\n________________________________________________________\n\n");
	        printf("\tDigite o numero a ser inserido na fila %s: ", aux->nome);
	        fflush(stdin);
	        scanf("%d", &resp);

	        //aux->estrutura.fila = InserirFila(aux->estrutura.fila, resp);
	    break;

	    case 2:
	        printf("________________________________________________________\n\n");
	       // ImprimirFila(aux->estrutura.fila);
	        printf("\n\n________________________________________________________\n\n");

	        printf("\tDigite o item que deseja excluir:\n");
	        scanf("%d",&resp);
	       // aux->estrutura.fila=RetiraFila(aux->estrutura.fila,resp);
	    break;

	    case 3:
	    printf("\n\tFila %s: ",aux->nome);
	     //   ImprimirFila(aux->estrutura.fila);
	        getch();
	    break;

	    default:
	    break;

	}
	goto returnmenu;
}


L_Geral* SelecaoLista(L_Geral *cab,int v)
{

	int menu,contador_percorre=1,resp;
	L_Geral *aux=cab;
	while (contador_percorre<v)
	{
		if(aux->flag=='3')
			contador_percorre++;

		aux=aux->prox;
	}

	returnmenu: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - Lista %s\n",aux->nome);
	printf("________________________________________________________\n\n");

	printf("Selecione a opção a ser manipulada:\n");
	printf("\t1 - Inserir na Lista\n");
	printf("\t2 - Excluir  da Lista\n");
	printf("\t3 - Exibir Lista\n");
	printf("\t0 - Voltar\n");
	printf("\nOpção: ");
	scanf("%d", &menu);

	switch(menu)
	{
		case 0:
			return cab;
		break;

		case 1:
			printf("\n________________________________________________________\n\n");
			printf("\tDigite o numero a ser inserido na lista %s: ", aux->nome);
			fflush(stdin);
			scanf("%d", &resp);

			aux->estrutura.lista = InserirLista(aux->estrutura.lista, resp);
		break;

		case 2:
			printf("________________________________________________________\n\n");
			ImprimirLista(aux->estrutura.lista);
			printf("\n\n________________________________________________________\n\n");

			printf("\tDigite o item que deseja excluir:\n");
			scanf("%d",&resp);
			aux->estrutura.lista=RetiraLista(aux->estrutura.lista,resp);
		break;

		case 3:
		printf("\n\tLista %s: ",aux->nome);
			ImprimirLista(aux->estrutura.lista);
			getch();
		break;

		default:
		break;

	}
	goto returnmenu;
}


L_Geral* SelecaoArvBB(L_Geral *cab,int v)
{
	int menu,contador_percorre=1,resp;
	L_Geral *aux=cab;
	while (contador_percorre<v)
	{
		if(aux->flag=='4')
			contador_percorre++;

		aux=aux->prox;
	}

	returnmenu: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - Árvore %s\n",aux->nome);
	printf("________________________________________________________\n\n");

	printf("Selecione a opção a ser manipulada:\n");
	printf("\t1 - Inserir na ArvBB\n");
	printf("\t2 - Excluir  da ArvBB\n");
	printf("\t3 - Exibir ArvBB\n");
	printf("\t0 - Voltar\n");
	printf("\nOpção: ");
	scanf("%d", &menu);

	switch(menu)
	{
		case 0:
			return cab;
		break;

		case 1:
			printf("\n________________________________________________________\n\n");
			printf("\tDigite o numero a ser inserido na Arvbb %s: ", aux->nome);
			fflush(stdin);
			scanf("%d", &resp);

			InserirArvBB(&(aux->estrutura.arvbb), resp);
		break;

		case 2:
			printf("________________________________________________________\n\n");
			ImprimirArvBB((aux->estrutura.arvbb),0,Altura(aux->estrutura.arvbb));
			printf("\n\n________________________________________________________\n\n");

			printf("\tDigite o item que deseja excluir:\n");
			scanf("%d",&resp);
			//RetiraArvBB(aux->estrutura.arvbb,resp);
		break;

		case 3:
		printf("\n\tArvBB %s: ",aux->nome);
			ImprimirArvBB(aux->estrutura.arvbb,0,Altura(aux->estrutura.arvbb));
			getch();
		break;

		default:
		break;

	}
	goto returnmenu;
}
