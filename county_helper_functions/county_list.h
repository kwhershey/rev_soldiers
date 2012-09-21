#include <vector>
#include <string>
#include <iostream>


vector<string> Adams;
vector<string> Alexander;
vector<string> Bond;
vector<string> Boone;
vector<string> Brown;
vector<string> Bureau;
vector<string> Calhoun;
vector<string> Carroll;
vector<string> Cass;
vector<string> Champaign;
vector<string> Christian;
vector<string> Clark;
vector<string> Clay;
vector<string> Clinton;
vector<string> Coles;
vector<string> Cook;
vector<string> Crawford;
vector<string> 	Cumberland;
vector<string> De_Witt;
vector<string> DeKalb;
vector<string> Douglas;
vector<string> DuPage;
vector<string> Edgar;
vector<string> Edwards;
vector<string> Effingham;
vector<string> Fayette;
vector<string> Ford;
vector<string> Franklin;
vector<string> Fulton;
vector<string> Gallatin;
vector<string> Greene;
vector<string> Grundy;
vector<string> Hamilton;
vector<string> Hancock;
vector<string> 	Hardin;
vector<string> Henderson;
vector<string> Henry;
vector<string> Iroquois;
vector<string> Jackson;
vector<string> Jasper;
vector<string> Jefferson;
vector<string> Jersey;
vector<string> Jo_Daviess;
vector<string> Johnson;
vector<string> Kane;
vector<string> Kankakee;
vector<string> Kendall;
vector<string> Knox;
vector<string> Lake;
vector<string> LaSalle;
vector<string> Lawrence;
vector<string> 	Lee;
vector<string> Livingston;
vector<string> Logan;
vector<string> Macon;
vector<string> Macoupin;
vector<string> Madison;
vector<string> Marion;
vector<string> Marshall;
vector<string> Mason;
vector<string> Massac;
vector<string> McDonough;
vector<string> McHenry;
vector<string> McLean;
vector<string> Menard;
vector<string> Mercer;
vector<string> Monroe;
vector<string> Montgomery;
vector<string> 	Morgan;
vector<string> Moultrie;
vector<string> Ogle;
vector<string> Peoria;
vector<string> Perry;
vector<string> Piatt;
vector<string> Pike;
vector<string> Pope;
vector<string> Pulaski;
vector<string> Putnam;
vector<string> Randolph;
vector<string> Richland;
vector<string> Rock_Island;
vector<string> Saline;
vector<string> Sangamon;
vector<string> Schuyler;
vector<string> Scott;
vector<string> 	Shelby;
vector<string> St_Clair;
vector<string> Stark;
vector<string> Stephenson;
vector<string> Tazewell;
vector<string> Union;
vector<string> Vermilion;
vector<string> Wabash;
vector<string> Warren;
vector<string> Washington;
vector<string> Wayne;
vector<string> White;
vector<string> Whiteside;
vector<string> Will;
vector<string> Williamson;
vector<string> Winnebago;
vector<string> Woodford;




bool push_to_county(info newperson)
{
  string newcounty = newperson.county;

  if(newcounty=="Adams")
    {
      Adams.push_back(newperson.name);
    }
  else if(newcounty=="Alexander")
    {
      Alexander.push_back(newperson.name);
    }
  else if(newcounty=="Bond")
    {
      Bond.push_back(newperson.name);
    }
  else if(newcounty=="Boone")
    {
      Boone.push_back(newperson.name);
    }
  else if(newcounty=="Brown")
    {
      Brown.push_back(newperson.name);
    }
  else if(newcounty=="Bureau")
    {
      Bureau.push_back(newperson.name);
    }
  else if(newcounty=="Calhoun")
    {
      Calhoun.push_back(newperson.name);
    }
  else if(newcounty=="Carroll")
    {
      Carroll.push_back(newperson.name);
    }
  else if(newcounty=="Cass")
    {
      Cass.push_back(newperson.name);
    }
  else if(newcounty=="Champaign")
    {
      Champaign.push_back(newperson.name);
    }
  else if(newcounty=="Christian")
    {
      Christian.push_back(newperson.name);
    }
  else if(newcounty=="Clark")
    {
      Clark.push_back(newperson.name);
    }
  else if(newcounty=="Clay")
    {
      Clay.push_back(newperson.name);
    }
  else if(newcounty=="Clinton")
    {
      Clinton.push_back(newperson.name);
    }
  else if(newcounty=="Coles")
    {
      Coles.push_back(newperson.name);
    }
  else if(newcounty=="Cook")
    {
      Cook.push_back(newperson.name);
    }
  else if(newcounty=="Crawford")
    {
      Crawford.push_back(newperson.name);
    }
  else if(newcounty=="Cumberland")
    {
      Cumberland.push_back(newperson.name);
    }
  else if(newcounty=="Witt")
    {
      De_Witt.push_back(newperson.name);
    }
  else if(newcounty=="DeKalb")
    {
      DeKalb.push_back(newperson.name);
    }
  else if(newcounty=="Douglas")
    {
      Douglas.push_back(newperson.name);
    }
  else if(newcounty=="DuPage")
    {
      DuPage.push_back(newperson.name);
    }
  else if(newcounty=="Edgar")
    {
      Edgar.push_back(newperson.name);
    }
  else if(newcounty=="Edwards")
    {
      Edwards.push_back(newperson.name);
    }
  else if(newcounty=="Effingham")
    {
      Effingham.push_back(newperson.name);
    }
  else if(newcounty=="Fayette")
    {
      Fayette.push_back(newperson.name);
    }
  else if(newcounty=="Ford")
    {
      Ford.push_back(newperson.name);
    }
  else if(newcounty=="Franklin")
    {
      Franklin.push_back(newperson.name);
    }
  else if(newcounty=="Fulton")
    {
      Fulton.push_back(newperson.name);
    }
  else if(newcounty=="Gallatin")
    {
      Gallatin.push_back(newperson.name);
    }
  else if(newcounty=="Greene")
    {
      Greene.push_back(newperson.name);
    }
  else if(newcounty=="Grundy")
    {
      Grundy.push_back(newperson.name);
    }
  else if(newcounty=="Hamilton")
    {
      Hamilton.push_back(newperson.name);
    }
  else if(newcounty=="Hancock")
    {
      Hancock.push_back(newperson.name);
    }
  else if(newcounty=="Hardin")
    {
      Hardin.push_back(newperson.name);
    }
  else if(newcounty=="Henderson")
    {
      Henderson.push_back(newperson.name);
    }
  else if(newcounty=="Henry")
    {
      Henry.push_back(newperson.name);
    }
  else if(newcounty=="Iroquois")
    {
      Iroquois.push_back(newperson.name);
    }
  else if(newcounty=="Jackson")
    {
      Jackson.push_back(newperson.name);
    }
  else if(newcounty=="Jasper")
    {
      Jasper.push_back(newperson.name);
    }
  else if(newcounty=="Jefferson")
    {
      Jefferson.push_back(newperson.name);
    }
  else if(newcounty=="Jersey")
    {
      Jersey.push_back(newperson.name);
    }
  else if(newcounty=="Daviess")
    {
      Jo_Daviess.push_back(newperson.name);
    }
  else if(newcounty=="Johnson")
    {
      Johnson.push_back(newperson.name);
    }
  else if(newcounty=="Kane")
    {
      Kane.push_back(newperson.name);
    }
  else if(newcounty=="Kankakee")
    {
      Kankakee.push_back(newperson.name);
    }
  else if(newcounty=="Kendall")
    {
      Kendall.push_back(newperson.name);
    }
  else if(newcounty=="Knox")
    {
      Knox.push_back(newperson.name);
    }
  else if(newcounty=="Lake")
    {
      Lake.push_back(newperson.name);
    }
  else if(newcounty=="LaSalle")
    {
      LaSalle.push_back(newperson.name);
    }
  else if(newcounty=="Lawrence")
    {
      Lawrence.push_back(newperson.name);
    }
  else if(newcounty=="Lee")
    {
      Lee.push_back(newperson.name);
    }
  else if(newcounty=="Livingston")
    {
      Livingston.push_back(newperson.name);
    }
  else if(newcounty=="Logan")
    {
      Logan.push_back(newperson.name);
    }
  else if(newcounty=="Macon")
    {
      Macon.push_back(newperson.name);
    }
  else if(newcounty=="Macoupin")
    {
      Macoupin.push_back(newperson.name);
    }
  else if(newcounty=="Madison")
    {
      Madison.push_back(newperson.name);
    }
  else if(newcounty=="Marion")
    {
      Marion.push_back(newperson.name);
    }
  else if(newcounty=="Marshall")
    {
      Marshall.push_back(newperson.name);
    }
  else if(newcounty=="Mason")
    {
      Mason.push_back(newperson.name);
    }
  else if(newcounty=="Massac")
    {
      Massac.push_back(newperson.name);
    }
  else if(newcounty=="McDonough")
    {
      McDonough.push_back(newperson.name);
    }
  else if(newcounty=="McHenry")
    {
      McHenry.push_back(newperson.name);
    }
  else if(newcounty=="McLean")
    {
      McLean.push_back(newperson.name);
    }
  else if(newcounty=="Menard")
    {
      Menard.push_back(newperson.name);
    }
  else if(newcounty=="Mercer")
    {
      Mercer.push_back(newperson.name);
    }
  else if(newcounty=="Monroe")
    {
      Monroe.push_back(newperson.name);
    }
  else if(newcounty=="Montgomery")
    {
      Montgomery.push_back(newperson.name);
    }
  else if(newcounty=="Morgan")
    {
      Morgan.push_back(newperson.name);
    }
  else if(newcounty=="Moultrie")
    {
      Moultrie.push_back(newperson.name);
    }
  else if(newcounty=="Ogle")
    {
      Ogle.push_back(newperson.name);
    }
  else if(newcounty=="Peoria")
    {
      Peoria.push_back(newperson.name);
    }
  else if(newcounty=="Perry")
    {
      Perry.push_back(newperson.name);
    }
  else if(newcounty=="Piatt")
    {
      Piatt.push_back(newperson.name);
    }
  else if(newcounty=="Pike")
    {
      Pike.push_back(newperson.name);
    }
  else if(newcounty=="Pope")
    {
      Pope.push_back(newperson.name);
    }
  else if(newcounty=="Pulaski")
    {
      Pulaski.push_back(newperson.name);
    }
  else if(newcounty=="Putnam")
    {
      Putnam.push_back(newperson.name);
    }
  else if(newcounty=="Randolph")
    {
      Randolph.push_back(newperson.name);
    }
  else if(newcounty=="Richland")
    {
      Richland.push_back(newperson.name);
    }
  else if(newcounty=="Island")
    {
      Rock_Island.push_back(newperson.name);
    }
  else if(newcounty=="Saline")
    {
      Saline.push_back(newperson.name);
    }
  else if(newcounty=="Sangamon")
    {
      Sangamon.push_back(newperson.name);
    }
  else if(newcounty=="Schuyler")
    {
      Schuyler.push_back(newperson.name);
    }
  else if(newcounty=="Scott")
    {
      Scott.push_back(newperson.name);
    }
  else if(newcounty=="Shelby")
    {
      Shelby.push_back(newperson.name);
    }
  else if(newcounty=="Clair")
    {
      St_Clair.push_back(newperson.name);
    }
  else if(newcounty=="Stark")
    {
      Stark.push_back(newperson.name);
    }
  else if(newcounty=="Stephenson")
    {
      Stephenson.push_back(newperson.name);
    }
  else if(newcounty=="Tazewell")
    {
      Tazewell.push_back(newperson.name);
    }
  else if(newcounty=="Union")
    {
      Union.push_back(newperson.name);
    }
  else if(newcounty=="Vermilion")
    {
      Vermilion.push_back(newperson.name);
    }
  else if(newcounty=="Wabash")
    {
      Wabash.push_back(newperson.name);
    }
  else if(newcounty=="Warren")
    {
      Warren.push_back(newperson.name);
    }
  else if(newcounty=="Washington")
    {
      Washington.push_back(newperson.name);
    }
  else if(newcounty=="Wayne")
    {
      Wayne.push_back(newperson.name);
    }
  else if(newcounty=="White")
    {
      White.push_back(newperson.name);
    }
  else if(newcounty=="Whiteside")
    {
      Whiteside.push_back(newperson.name);
    }
  else if(newcounty=="Will")
    {
      Will.push_back(newperson.name);
    }
  else if(newcounty=="Williamson")
    {
      Williamson.push_back(newperson.name);
    }
  else if(newcounty=="Winnebago")
    {
      Winnebago.push_back(newperson.name);
    }
  else if(newcounty=="Woodford")
    {
      Woodford.push_back(newperson.name);
    }
  else return false;

  return true;


}


void print_index()
{
  ofstream index ("index.txt");

  
  if(!Adams.empty())
    {
      index << "Adams:" << endl;
      for(int i=0;i<Adams.size(); i++)
	{
	  index << Adams[i] << endl;
	}
    }
  if(!Alexander.empty())
    {
      index << "Alexander:" << endl;
      for(int i=0;i<Alexander.size(); i++)
	{
	  index << Alexander[i] << endl;
	}
    }
  if(!Bond.empty())
    {
      index << "Bond:" << endl;
      for(int i=0;i<Bond.size(); i++)
	{
	  index << Bond[i] << endl;
	}
    }
  if(!Boone.empty())
    {
      index << "Boone:" << endl;
      for(int i=0;i<Boone.size(); i++)
	{
	  index << Boone[i] << endl;
	}
    }
  if(!Brown.empty())
    {
      index << "Brown:" << endl;
      for(int i=0;i<Brown.size(); i++)
	{
	  index << Brown[i] << endl;
	}
    }
  if(!Bureau.empty())
    {
      index << "Bureau:" << endl;
      for(int i=0;i<Bureau.size(); i++)
	{
	  index << Bureau[i] << endl;
	}
    }
  if(!Calhoun.empty())
    {
      index << "Calhoun:" << endl;
      for(int i=0;i<Calhoun.size(); i++)
	{
	  index << Calhoun[i] << endl;
	}
    }
  if(!Carroll.empty())
    {
      index << "Carroll:" << endl;
      for(int i=0;i<Carroll.size(); i++)
	{
	  index << Carroll[i] << endl;
	}
    }
  if(!Cass.empty())
    {
      index << "Cass:" << endl;
      for(int i=0;i<Cass.size(); i++)
	{
	  index << Cass[i] << endl;
	}
    }
  if(!Champaign.empty())
    {
      index << "Champaign:" << endl;
      for(int i=0;i<Champaign.size(); i++)
	{
	  index << Champaign[i] << endl;
	}
    }
  if(!Christian.empty())
    {
      index << "Christian:" << endl;
      for(int i=0;i<Christian.size(); i++)
	{
	  index << Christian[i] << endl;
	}
    }
  if(!Clark.empty())
    {
      index << "Clark:" << endl;
      for(int i=0;i<Clark.size(); i++)
	{
	  index << Clark[i] << endl;
	}
    }
  if(!Clay.empty())
    {
      index << "Clay:" << endl;
      for(int i=0;i<Clay.size(); i++)
	{
	  index << Clay[i] << endl;
	}
    }
  if(!Clinton.empty())
    {
      index << "Clinton:" << endl;
      for(int i=0;i<Clinton.size(); i++)
	{
	  index << Clinton[i] << endl;
	}
    }
  if(!Coles.empty())
    {
      index << "Coles:" << endl;
      for(int i=0;i<Coles.size(); i++)
	{
	  index << Coles[i] << endl;
	}
    }
  if(!Cook.empty())
    {
      index << "Cook:" << endl;
      for(int i=0;i<Cook.size(); i++)
	{
	  index << Cook[i] << endl;
	}
    }
  if(!Crawford.empty())
    {
      index << "Crawford:" << endl;
      for(int i=0;i<Crawford.size(); i++)
	{
	  index << Crawford[i] << endl;
	}
    }
  if(!Cumberland.empty())
    {
      index << "Cumberland:" << endl;
      for(int i=0;i<Cumberland.size(); i++)
	{
	  index << Cumberland[i] << endl;
	}
    }
  if(!De_Witt.empty())
    {
      index << "De Witt:" << endl;
      for(int i=0;i<De_Witt.size(); i++)
	{
	  index << De_Witt[i] << endl;
	}
    }
  if(!DeKalb.empty())
    {
      index << "DeKalb:" << endl;
      for(int i=0;i<DeKalb.size(); i++)
	{
	  index << DeKalb[i] << endl;
	}
    }
  if(!Douglas.empty())
    {
      index << "Douglas:" << endl;
      for(int i=0;i<Douglas.size(); i++)
	{
	  index << Douglas[i] << endl;
	}
    }
  if(!DuPage.empty())
    {
      index << "DuPage:" << endl;
      for(int i=0;i<DuPage.size(); i++)
	{
	  index << DuPage[i] << endl;
	}
    }
  if(!Edgar.empty())
    {
      index << "Edgar:" << endl;
      for(int i=0;i<Edgar.size(); i++)
	{
	  index << Edgar[i] << endl;
	}
    }
  if(!Edwards.empty())
    {
      index << "Edwards:" << endl;
      for(int i=0;i<Edwards.size(); i++)
	{
	  index << Edwards[i] << endl;
	}
    }
  if(!Effingham.empty())
    {
      index << "Effingham:" << endl;
      for(int i=0;i<Effingham.size(); i++)
	{
	  index << Effingham[i] << endl;
	}
    }
  if(!Fayette.empty())
    {
      index << "Fayette:" << endl;
      for(int i=0;i<Fayette.size(); i++)
	{
	  index << Fayette[i] << endl;
	}
    }
  if(!Ford.empty())
    {
      index << "Ford:" << endl;
      for(int i=0;i<Ford.size(); i++)
	{
	  index << Ford[i] << endl;
	}
    }
  if(!Franklin.empty())
    {
      index << "Franklin:" << endl;
      for(int i=0;i<Franklin.size(); i++)
	{
	  index << Franklin[i] << endl;
	}
    }
  if(!Fulton.empty())
    {
      index << "Fulton:" << endl;
      for(int i=0;i<Fulton.size(); i++)
	{
	  index << Fulton[i] << endl;
	}
    }
  if(!Gallatin.empty())
    {
      index << "Gallatin:" << endl;
      for(int i=0;i<Gallatin.size(); i++)
	{
	  index << Gallatin[i] << endl;
	}
    }
  if(!Greene.empty())
    {
      index << "Greene:" << endl;
      for(int i=0;i<Greene.size(); i++)
	{
	  index << Greene[i] << endl;
	}
    }
  if(!Grundy.empty())
    {
      index << "Grundy:" << endl;
      for(int i=0;i<Grundy.size(); i++)
	{
	  index << Grundy[i] << endl;
	}
    }
  if(!Hamilton.empty())
    {
      index << "Hamilton:" << endl;
      for(int i=0;i<Hamilton.size(); i++)
	{
	  index << Hamilton[i] << endl;
	}
    }
  if(!Hancock.empty())
    {
      index << "Hancock:" << endl;
      for(int i=0;i<Hancock.size(); i++)
	{
	  index << Hancock[i] << endl;
	}
    }
  if(!Hardin.empty())
    {
      index << "Hardin:" << endl;
      for(int i=0;i<Hardin.size(); i++)
	{
	  index << Hardin[i] << endl;
	}
    }
  if(!Henderson.empty())
    {
      index << "Henderson:" << endl;
      for(int i=0;i<Henderson.size(); i++)
	{
	  index << Henderson[i] << endl;
	}
    }
  if(!Henry.empty())
    {
      index << "Henry:" << endl;
      for(int i=0;i<Henry.size(); i++)
	{
	  index << Henry[i] << endl;
	}
    }
  if(!Iroquois.empty())
    {
      index << "Iroquois:" << endl;
      for(int i=0;i<Iroquois.size(); i++)
	{
	  index << Iroquois[i] << endl;
	}
    }
  if(!Jackson.empty())
    {
      index << "Jackson:" << endl;
      for(int i=0;i<Jackson.size(); i++)
	{
	  index << Jackson[i] << endl;
	}
    }
  if(!Jasper.empty())
    {
      index << "Jasper:" << endl;
      for(int i=0;i<Jasper.size(); i++)
	{
	  index << Jasper[i] << endl;
	}
    }
  if(!Jefferson.empty())
    {
      index << "Jefferson:" << endl;
      for(int i=0;i<Jefferson.size(); i++)
	{
	  index << Jefferson[i] << endl;
	}
    }
  if(!Jersey.empty())
    {
      index << "Jersey:" << endl;
      for(int i=0;i<Jersey.size(); i++)
	{
	  index << Jersey[i] << endl;
	}
    }
  if(!Jo_Daviess.empty())
    {
      index << "Jo Daviess:" << endl;
      for(int i=0;i<Jo_Daviess.size(); i++)
	{
	  index << Jo_Daviess[i] << endl;
	}
    }
  if(!Johnson.empty())
    {
      index << "Johnson:" << endl;
      for(int i=0;i<Johnson.size(); i++)
	{
	  index << Johnson[i] << endl;
	}
    }
  if(!Kane.empty())
    {
      index << "Kane:" << endl;
      for(int i=0;i<Kane.size(); i++)
	{
	  index << Kane[i] << endl;
	}
    }
  if(!Kankakee.empty())
    {
      index << "Kankakee:" << endl;
      for(int i=0;i<Kankakee.size(); i++)
	{
	  index << Kankakee[i] << endl;
	}
    }
  if(!Kendall.empty())
    {
      index << "Kendall:" << endl;
      for(int i=0;i<Kendall.size(); i++)
	{
	  index << Kendall[i] << endl;
	}
    }
  if(!Knox.empty())
    {
      index << "Knox:" << endl;
      for(int i=0;i<Knox.size(); i++)
	{
	  index << Knox[i] << endl;
	}
    }
  if(!Lake.empty())
    {
      index << "Lake:" << endl;
      for(int i=0;i<Lake.size(); i++)
	{
	  index << Lake[i] << endl;
	}
    }
  if(!LaSalle.empty())
    {
      index << "LaSalle:" << endl;
      for(int i=0;i<LaSalle.size(); i++)
	{
	  index << LaSalle[i] << endl;
	}
    }
  if(!Lawrence.empty())
    {
      index << "Lawrence:" << endl;
      for(int i=0;i<Lawrence.size(); i++)
	{
	  index << Lawrence[i] << endl;
	}
    }
  if(!Lee.empty())
    {
      index << "Lee:" << endl;
      for(int i=0;i<Lee.size(); i++)
	{
	  index << Lee[i] << endl;
	}
    }
  if(!Livingston.empty())
    {
      index << "Livingston:" << endl;
      for(int i=0;i<Livingston.size(); i++)
	{
	  index << Livingston[i] << endl;
	}
    }
  if(!Logan.empty())
    {
      index << "Logan:" << endl;
      for(int i=0;i<Logan.size(); i++)
	{
	  index << Logan[i] << endl;
	}
    }
  if(!Macon.empty())
    {
      index << "Macon:" << endl;
      for(int i=0;i<Macon.size(); i++)
	{
	  index << Macon[i] << endl;
	}
    }
  if(!Macoupin.empty())
    {
      index << "Macoupin:" << endl;
      for(int i=0;i<Macoupin.size(); i++)
	{
	  index << Macoupin[i] << endl;
	}
    }
  if(!Madison.empty())
    {
      index << "Madison:" << endl;
      for(int i=0;i<Madison.size(); i++)
	{
	  index << Madison[i] << endl;
	}
    }
  if(!Marion.empty())
    {
      index << "Marion:" << endl;
      for(int i=0;i<Marion.size(); i++)
	{
	  index << Marion[i] << endl;
	}
    }
  if(!Marshall.empty())
    {
      index << "Marshall:" << endl;
      for(int i=0;i<Marshall.size(); i++)
	{
	  index << Marshall[i] << endl;
	}
    }
  if(!Mason.empty())
    {
      index << "Mason:" << endl;
      for(int i=0;i<Mason.size(); i++)
	{
	  index << Mason[i] << endl;
	}
    }
  if(!Massac.empty())
    {
      index << "Massac:" << endl;
      for(int i=0;i<Massac.size(); i++)
	{
	  index << Massac[i] << endl;
	}
    }
  if(!McDonough.empty())
    {
      index << "McDonough:" << endl;
      for(int i=0;i<McDonough.size(); i++)
	{
	  index << McDonough[i] << endl;
	}
    }
  if(!McHenry.empty())
    {
      index << "McHenry:" << endl;
      for(int i=0;i<McHenry.size(); i++)
	{
	  index << McHenry[i] << endl;
	}
    }
  if(!McLean.empty())
    {
      index << "McLean:" << endl;
      for(int i=0;i<McLean.size(); i++)
	{
	  index << McLean[i] << endl;
	}
    }
  if(!Menard.empty())
    {
      index << "Menard:" << endl;
      for(int i=0;i<Menard.size(); i++)
	{
	  index << Menard[i] << endl;
	}
    }
  if(!Mercer.empty())
    {
      index << "Mercer:" << endl;
      for(int i=0;i<Mercer.size(); i++)
	{
	  index << Mercer[i] << endl;
	}
    }
  if(!Monroe.empty())
    {
      index << "Monroe:" << endl;
      for(int i=0;i<Monroe.size(); i++)
	{
	  index << Monroe[i] << endl;
	}
    }
  if(!Montgomery.empty())
    {
      index << "Montgomery:" << endl;
      for(int i=0;i<Montgomery.size(); i++)
	{
	  index << Montgomery[i] << endl;
	}
    }
  if(!Morgan.empty())
    {
      index << "Morgan:" << endl;
      for(int i=0;i<Morgan.size(); i++)
	{
	  index << Morgan[i] << endl;
	}
    }
  if(!Moultrie.empty())
    {
      index << "Moultrie:" << endl;
      for(int i=0;i<Moultrie.size(); i++)
	{
	  index << Moultrie[i] << endl;
	}
    }
  if(!Ogle.empty())
    {
      index << "Ogle:" << endl;
      for(int i=0;i<Ogle.size(); i++)
	{
	  index << Ogle[i] << endl;
	}
    }
  if(!Peoria.empty())
    {
      index << "Peoria:" << endl;
      for(int i=0;i<Peoria.size(); i++)
	{
	  index << Peoria[i] << endl;
	}
    }
  if(!Perry.empty())
    {
      index << "Perry:" << endl;
      for(int i=0;i<Perry.size(); i++)
	{
	  index << Perry[i] << endl;
	}
    }
  if(!Piatt.empty())
    {
      index << "Piatt:" << endl;
      for(int i=0;i<Piatt.size(); i++)
	{
	  index << Piatt[i] << endl;
	}
    }
  if(!Pike.empty())
    {
      index << "Pike:" << endl;
      for(int i=0;i<Pike.size(); i++)
	{
	  index << Pike[i] << endl;
	}
    }
  if(!Pope.empty())
    {
      index << "Pope:" << endl;
      for(int i=0;i<Pope.size(); i++)
	{
	  index << Pope[i] << endl;
	}
    }
  if(!Pulaski.empty())
    {
      index << "Pulaski:" << endl;
      for(int i=0;i<Pulaski.size(); i++)
	{
	  index << Pulaski[i] << endl;
	}
    }
  if(!Putnam.empty())
    {
      index << "Putnam:" << endl;
      for(int i=0;i<Putnam.size(); i++)
	{
	  index << Putnam[i] << endl;
	}
    }
  if(!Randolph.empty())
    {
      index << "Randolph:" << endl;
      for(int i=0;i<Randolph.size(); i++)
	{
	  index << Randolph[i] << endl;
	}
    }
  if(!Richland.empty())
    {
      index << "Richland:" << endl;
      for(int i=0;i<Richland.size(); i++)
	{
	  index << Richland[i] << endl;
	}
    }
  if(!Rock_Island.empty())
    {
      index << "Rock Island:" << endl;
      for(int i=0;i<Rock_Island.size(); i++)
	{
	  index << Rock_Island[i] << endl;
	}
    }
  if(!Saline.empty())
    {
      index << "Saline:" << endl;
      for(int i=0;i<Saline.size(); i++)
	{
	  index << Saline[i] << endl;
	}
    }
  if(!Sangamon.empty())
    {
      index << "Sangamon:" << endl;
      for(int i=0;i<Sangamon.size(); i++)
	{
	  index << Sangamon[i] << endl;
	}
    }
  if(!Schuyler.empty())
    {
      index << "Schuyler:" << endl;
      for(int i=0;i<Schuyler.size(); i++)
	{
	  index << Schuyler[i] << endl;
	}
    }
  if(!Scott.empty())
    {
      index << "Scott:" << endl;
      for(int i=0;i<Scott.size(); i++)
	{
	  index << Scott[i] << endl;
	}
    }
  if(!Shelby.empty())
    {
      index << "Shelby:" << endl;
      for(int i=0;i<Shelby.size(); i++)
	{
	  index << Shelby[i] << endl;
	}
    }
  if(!St_Clair.empty())
    {
      index << "St. Clair:" << endl;
      for(int i=0;i<St_Clair.size(); i++)
	{
	  index << St_Clair[i] << endl;
	}
    }
  if(!Stark.empty())
    {
      index << "Stark:" << endl;
      for(int i=0;i<Stark.size(); i++)
	{
	  index << Stark[i] << endl;
	}
    }
  if(!Stephenson.empty())
    {
      index << "Stephenson:" << endl;
      for(int i=0;i<Stephenson.size(); i++)
	{
	  index << Stephenson[i] << endl;
	}
    }
  if(!Tazewell.empty())
    {
      index << "Tazewell:" << endl;
      for(int i=0;i<Tazewell.size(); i++)
	{
	  index << Tazewell[i] << endl;
	}
    }
  if(!Union.empty())
    {
      index << "Union:" << endl;
      for(int i=0;i<Union.size(); i++)
	{
	  index << Union[i] << endl;
	}
    }
  if(!Vermilion.empty())
    {
      index << "Vermilion:" << endl;
      for(int i=0;i<Vermilion.size(); i++)
	{
	  index << Vermilion[i] << endl;
	}
    }
  if(!Wabash.empty())
    {
      index << "Wabash:" << endl;
      for(int i=0;i<Wabash.size(); i++)
	{
	  index << Wabash[i] << endl;
	}
    }
  if(!Warren.empty())
    {
      index << "Warren:" << endl;
      for(int i=0;i<Warren.size(); i++)
	{
	  index << Warren[i] << endl;
	}
    }
  if(!Washington.empty())
    {
      index << "Washington:" << endl;
      for(int i=0;i<Washington.size(); i++)
	{
	  index << Washington[i] << endl;
	}
    }
  if(!Wayne.empty())
    {
      index << "Wayne:" << endl;
      for(int i=0;i<Wayne.size(); i++)
	{
	  index << Wayne[i] << endl;
	}
    }
  if(!White.empty())
    {
      index << "White:" << endl;
      for(int i=0;i<White.size(); i++)
	{
	  index << White[i] << endl;
	}
    }
  if(!Whiteside.empty())
    {
      index << "Whiteside:" << endl;
      for(int i=0;i<Whiteside.size(); i++)
	{
	  index << Whiteside[i] << endl;
	}
    }
  if(!Will.empty())
    {
      index << "Will:" << endl;
      for(int i=0;i<Will.size(); i++)
	{
	  index << Will[i] << endl;
	}
    }
  if(!Williamson.empty())
    {
      index << "Williamson:" << endl;
      for(int i=0;i<Williamson.size(); i++)
	{
	  index << Williamson[i] << endl;
	}
    }
  if(!Winnebago.empty())
    {
      index << "Winnebago:" << endl;
      for(int i=0;i<Winnebago.size(); i++)
	{
	  index << Winnebago[i] << endl;
	}
    }
  if(!Woodford.empty())
    {
      index << "Woodford:" << endl;
      for(int i=0;i<Woodford.size(); i++)
	{
	  index << Woodford[i] << endl;
	}
    }


}
