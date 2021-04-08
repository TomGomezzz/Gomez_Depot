//Fonctions réalisées par l'étudiant 1 Tom GOMEZ :










//Fonctions réalisées par l'étudiant 2 Thibault RODIER :

bool estPair(int nb)
{
    if (nb%2=0)
    {
        return true;
    }else
    {
        return false;
    }
}

int sommeNombre(int nb)
{
    int resultat = 0;
    int i=0;
    for(i=0;i<nb;i++)
    {
        resultat=resultat+nb;
    }
    return resultat;
}

float salaireNet(int salaire)
{
    int resultat;
    resultat=salaire*0.77;
    return resultat;
}

int plusPetit(int a, int b, int c)
{
    int resultat;
    if(a<b && a<c)
    {
        return a;
    }

}


//Fonctions réalisées par l'étudiant 3 Romain LANTELME :
bool estImpair(int nb)
{
    if(nb%2 != 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

float moyenne(int nb1, int nb2, int nb3)
{
    float moyenne;
    moyenne = (nb1 + nb2 + nb3) /3;
    return moyenne;
}

float reduction(int prix, int reduc)
{
    float prixReduc;
    prixReduc = prix - (prix*reduc/100);
    return prixReduc;
}

int nombreMedian(int a, int b, int c)
{
    if(b<a && a<c || c<a && a<b)
    {
        return a;
    }   
    else if(a<b && b<c || c<b && b<a)
    {
        return b;
    }
    else if(b<c && c<a || a<c && c<b)
    {
        return c;
    }
}
    
