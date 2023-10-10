
#include <iostream>
#include "Software.h"
#include "Administrador.h"
#include "Juego.h"
#include "Navegador.h"
#include "Usuario.h"
#include "NormalUser.h"
#include "Ofimatica.h"
#include "Produccion.h"
#include "Seguridad.h"
#include "Social.h"
#include "vector"
#include "NodoUsuario.h"
#include "ListaCircularUsuarios.h"
#include "ListaCircularSoftware.h"
void cargarDatos(ListaCircularUsuarios& listaUsuarios, ListaCircularSoftware& listaSoftware);

int main() {
    ListaCircularUsuarios listaUsuario;
    ListaCircularSoftware listaSoftware;
    cargarDatos(listaUsuario,listaSoftware);



    return 0;
}

//Aqui se cargan los usuarios para que queden almacenados en la base de datos

void cargarDatos(ListaCircularUsuarios& listaUsuario, ListaCircularSoftware& listaSoftware){
    Administrador a("Jose","123123",30,"admin@admin.cl", true);
    listaUsuario.agregarUsuario(&a);

    NormalUser u1 ("Juan","juan123",25,"juan@example.com");
    NormalUser u2 ("Maria","maria456",28,"maria@example.com");
    NormalUser u3 ("Carlos","carlos789",32,"carlos@example.com");
    NormalUser u4 ("Ana","ana321",29,"ana@example.com");
    NormalUser u5 ("Pedro","pedro555",35,"pedro@example.com");
    NormalUser u6 ("Laura","laura777",27,"laura@example.com");
    NormalUser u7 ("Miguel","miguel999",31,"miguel@example.com");
    NormalUser u8 ("Isabel","isabel654",26,"isabel@example.com");
    NormalUser u9 ("Luis","luis111",30,"luis@example.com");
    NormalUser u10 ("Sofia","sofia222",24,"sofia@example.com");
    listaUsuario.agregarUsuario(&u1);listaUsuario.agregarUsuario(&u2);listaUsuario.agregarUsuario(&u3);listaUsuario.agregarUsuario(&u4);listaUsuario.agregarUsuario(&u5);listaUsuario.agregarUsuario(&u6);listaUsuario.agregarUsuario(&u10);listaUsuario.agregarUsuario(&u7);listaUsuario.agregarUsuario(&u8);listaUsuario.agregarUsuario(&u9);

    Usuario n1("Luis","luis123",16);
    Usuario n2("Ana","ana456",15);
    Usuario n3("Marta","marta789",17);
    Usuario n4("Juan","juan101",14);
    listaUsuario.agregarUsuario(&n1);listaUsuario.agregarUsuario(&n2);listaUsuario.agregarUsuario(&n3);listaUsuario.agregarUsuario(&n4);

    Juego j1 ("The Witcher 3: Wild Hunt","CD Projekt Red",18,29.99,"MMO");
    j1.agregarListUser(a);j1.agregarListUser(u1);
    Juego j2("Dark Souls III","FromSoftware",18,59.99,"MMO");
    j2.agregarListUser(u2);j1.agregarListUser(u3);
    Juego j3("Minecraft","Mojang",0,19.99,"PUZZLE");
    j3.agregarListUser(n1);j1.agregarListUser(u4);
    Juego j4("Stardew Valley","ConcernedApe",0,14.99,"PUZZLE");
    j4.agregarListUser(n2);j1.agregarListUser(n1);
    Juego j5("Terraria","Re-Logic",0,9.99,"Aventura");
    j5.agregarListUser(n3);j1.agregarListUser(u1);
    Juego j6("Red Dead Redemption 2","Rockstar Games",18,59.99,"Acción-Aventura");
    j6.agregarListUser(u5);j1.agregarListUser(u6);
    Juego j7("Grand Theft Auto V","Rockstar Games",18,29.99,"Acción-Aventura");
    j7.agregarListUser(u8);j1.agregarListUser(u7);
    Juego j8("Celeste","Maddy Makes Games",0,19.99,"Plataformas");
    j8.agregarListUser(n3);j1.agregarListUser(n2);
    Juego j9("Cuphead","Studio MDHR",10,19.99,"Plataformas");
    j9.agregarListUser(n3);j1.agregarListUser(n4);
    Juego j10("Hollow Knight","Team Cherry",7,14.99,"Aventura");
    j10.agregarListUser(n3);j1.agregarListUser(u2);
    Juego j11("The Elder Scrolls V: Skyrim","Bethesda Game Studios",18,39.99,"RPG");
    j11.agregarListUser(u6);j1.agregarListUser(u9);
    Juego j12("Divinity: Original Sin 2","Larian Studios",17,44.99,"RPG");
    j12.agregarListUser(n3);j1.agregarListUser(u10);
    Juego j13("Rocket League","Psyonix",0,19.99,"Deportes");
    j13.agregarListUser(n3);j1.agregarListUser(a);
    Juego j14("FIFA 23","EA Sports",0,59.99,"Deportes");
    j14.agregarListUser(u10);j1.agregarListUser(u5);
    Juego j15("Doom Eternal","id Software",18,39.99,"FPS");
    j15.agregarListUser(u3);j1.agregarListUser(u7);
    Juego j16("Halo: Master Chief Collection","343 Industries",17,39.99,"FPS");
    j16.agregarListUser(a);j1.agregarListUser(u6);
    Juego j17("Mortal Kombat 11","NetherRealm Studios",18,49.99,"Lucha");
    j17.agregarListUser(u2);j1.agregarListUser(u1);
    Juego j18("Resident Evil Village","Capcom",18,59.99,"Estrategia");
    j18.agregarListUser(u4);j1.agregarListUser(u9);
    Juego j19("Among Us","Innersloth",0,4.99,"Estrategia");
    j19.agregarListUser(n3);j1.agregarListUser(n2);
    Juego j20("League of Legends","Riot Games",13,0,"Lucha");
    j20.agregarListUser(u10);j1.agregarListUser(a);
    listaSoftware.agregarSoftware(&j1);listaSoftware.agregarSoftware(&j2);listaSoftware.agregarSoftware(&j3);listaSoftware.agregarSoftware(&j4);listaSoftware.agregarSoftware(&j5);listaSoftware.agregarSoftware(&j6);listaSoftware.agregarSoftware(&j7);listaSoftware.agregarSoftware(&j8);listaSoftware.agregarSoftware(&j9);listaSoftware.agregarSoftware(&j10);
    listaSoftware.agregarSoftware(&j11);listaSoftware.agregarSoftware(&j12);listaSoftware.agregarSoftware(&j13);listaSoftware.agregarSoftware(&j14);listaSoftware.agregarSoftware(&j15);listaSoftware.agregarSoftware(&j16);listaSoftware.agregarSoftware(&j17);listaSoftware.agregarSoftware(&j18);listaSoftware.agregarSoftware(&j19);listaSoftware.agregarSoftware(&j20);

    Ofimatica o1("Microsoft Office","Microsoft",0,149.99 ,1000 );
    Ofimatica o2("Google Workspace","Google",0,6,500);
    Ofimatica o3("LibreOffice","The Document Foundation",0,0,800);
    Ofimatica o4("WPS Office","Kingsoft Office Software",0,0,600);
    Ofimatica o5("Apple iWork","Apple",0,0,300);
    o1.agregarListUser(a);o1.agregarListUser(u1);o1.agregarListUser(u5);
    o2.agregarListUser(a);o2.agregarListUser(u7);o2.agregarListUser(n1);
    o3.agregarListUser(a);o3.agregarListUser(n3);o3.agregarListUser(u10);
    o4.agregarListUser(n4);o4.agregarListUser(u8);o4.agregarListUser(u9);
    o5.agregarListUser(n2);o5.agregarListUser(u2);o5.agregarListUser(u3);
    listaSoftware.agregarSoftware(&o1);listaSoftware.agregarSoftware(&o2);listaSoftware.agregarSoftware(&o3);listaSoftware.agregarSoftware(&o4);listaSoftware.agregarSoftware(&o5);

    Produccion p1("Adobe Premiere Pro","Adobe",18,20.99,"Video");
    Produccion p2("Ableton Live","Ableton",18,99 ,"Música");
    Produccion p3("OBS Studio","OBS Project",18,0,"Streaming");
    Produccion p4("Adobe Photoshop","Adobe",18,20.99,"Fotos");
    p1.agregarListUser(a);p1.agregarListUser(u10);
    p2.agregarListUser(u5);p2.agregarListUser(u1);
    p3.agregarListUser(u7); p3.agregarListUser(u8);
    p4.agregarListUser(a); p4.agregarListUser(u2);
    listaSoftware.agregarSoftware(&p1);listaSoftware.agregarSoftware(&p2);listaSoftware.agregarSoftware(&p3);listaSoftware.agregarSoftware(&p4);

    string h1 = "https://www.wikipedia.org";string h2 = "https://www.youtube.com";string h3 = "https://www.nytimes.com";string h4 = "https://www.amazon.com";string h5 = "https://www.reddit.com";string h6 = "https://www.cnn.com";string h7 = "https://www.facebook.com";string h8 = "https://www.linkedin.com";string h9 = "https://www.twitter.com";string h10 = "https://www.imdb.com";
    string historial1 = h1+"\n"+h2+ h3+"\n"+h4+"\n"+h5+"\n"+h6+"\n"+h7+"\n"+h8+"\n"+h9+"\n"+h10;
    string h11 = "https://www.github.com";string h12 = "https://www.netflix.com";string h13 = "https://www.weather.com";string h14 = "https://www.quora.com";string h15 = "https://www.stackoverflow.com";string h16 = "https://www.medium.com";string h17 = "https://www.udemy.com";string h18 = "https://www.twitch.tv";string h19 = "https://www.airbnb.com";string h20 = "https://www.nationalgeographic.com";
    string historial2 = h11+"\n"+h12+ h13+"\n"+h14+"\n"+h15+"\n"+h16+"\n"+h17+"\n"+h18+"\n"+h19+"\n"+h20;
    Navegador na1("Google Chrome","Google",0,0,historial1);
    Navegador na2("Mozilla Firefox","Mozilla Corporation",0,0,historial2);
    na1.agregarListUser(n1);na1.agregarListUser(a);na1.agregarListUser(u10);na1.agregarListUser(u5);
    na2.agregarListUser(u4);na2.agregarListUser(u3);na2.agregarListUser(n2);na2.agregarListUser(n3);
    listaSoftware.agregarSoftware(&na1);listaSoftware.agregarSoftware(&na2);
    Seguridad s1("GuardianShield Pro","SecureTech Inc.",0,49.99,"Ransomware");
    Seguridad s2("CyberArmor","CyberSecurity Solutions",0,29.99,"botnets");
    Seguridad s3("DefenderX","SecurityMasters Ltd.",0,69.99,"troyanos");
    Seguridad s4("SpywareGuard","PrivacyGuardians",0,0,"Spyware");
    Seguridad s5("RootkitHunter","SecurityTech Labs",13,0,"rootkits");
    Seguridad s6("WormBlocker","AntivirusPro Inc.",0,39.99,"gusanos");
    s1.agregarListUser(a);s2.agregarListUser(a);s3.agregarListUser(a);s4.agregarListUser(a);s5.agregarListUser(a);s6.agregarListUser(a);
    listaSoftware.agregarSoftware(&s1);listaSoftware.agregarSoftware(&s2);listaSoftware.agregarSoftware(&s3);listaSoftware.agregarSoftware(&s4);listaSoftware.agregarSoftware(&s5);listaSoftware.agregarSoftware(&s6);
    Social so1("SocialConnect","TechMasters Inc.",0,0);
    Social so2("FriendLinker","SocialTech Solutions",13,0);

}
