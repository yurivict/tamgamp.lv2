
// s10_stage9_neg_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  -10.000000
 // --table_div  1.000000
 // --table_op  1.000000

struct tables10_stage9_neg { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tables10_stage9_neg_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tables10_stage9_neg&() const { return *(tables10_stage9_neg*)this; }
};

static tables10_stage9_neg_imp<2048> s10_stage9_neg_table __rt_data = {
	0,-0.300119,204.7,2048, {
	0.000000000000,-0.000289685430,-0.000579156097,-0.000868412154,-0.001157453752,
	-0.001446281042,-0.001734894178,-0.002023293310,-0.002311478590,-0.002599450169,
	-0.002887208199,-0.003174752832,-0.003462084217,-0.003749202507,-0.004036107853,
	-0.004322800404,-0.004609280312,-0.004895547727,-0.005181602799,-0.005467445681,
	-0.005753076520,-0.006038495468,-0.006323702675,-0.006608698291,-0.006893482465,
	-0.007178055347,-0.007462417088,-0.007746567836,-0.008030507741,-0.008314236952,
	-0.008597755618,-0.008881063889,-0.009164161914,-0.009447049841,-0.009729727820,
	-0.010012195998,-0.010294454525,-0.010576503550,-0.010858343219,-0.011139973683,
	-0.011421395088,-0.011702607583,-0.011983611317,-0.012264406436,-0.012544993089,
	-0.012825371423,-0.013105541585,-0.013385503724,-0.013665257987,-0.013944804520,
	-0.014224143471,-0.014503274988,-0.014782199216,-0.015060916302,-0.015339426395,
	-0.015617729639,-0.015895826181,-0.016173716169,-0.016451399747,-0.016728877064,
	-0.017006148263,-0.017283213493,-0.017560072897,-0.017836726623,-0.018113174816,
	-0.018389417621,-0.018665455184,-0.018941287650,-0.019216915165,-0.019492337873,
	-0.019767555920,-0.020042569451,-0.020317378611,-0.020591983544,-0.020866384395,
	-0.021140581309,-0.021414574429,-0.021688363901,-0.021961949869,-0.022235332476,
	-0.022508511867,-0.022781488186,-0.023054261577,-0.023326832183,-0.023599200147,
	-0.023871365615,-0.024143328728,-0.024415089630,-0.024686648465,-0.024958005376,
	-0.025229160505,-0.025500113996,-0.025770865991,-0.026041416633,-0.026311766065,
	-0.026581914430,-0.026851861869,-0.027121608525,-0.027391154540,-0.027660500057,
	-0.027929645217,-0.028198590163,-0.028467335035,-0.028735879977,-0.029004225129,
	-0.029272370632,-0.029540316630,-0.029808063262,-0.030075610670,-0.030342958995,
	-0.030610108378,-0.030877058960,-0.031143810882,-0.031410364285,-0.031676719309,
	-0.031942876094,-0.032208834782,-0.032474595512,-0.032740158425,-0.033005523660,
	-0.033270691359,-0.033535661660,-0.033800434704,-0.034065010630,-0.034329389578,
	-0.034593571688,-0.034857557098,-0.035121345949,-0.035384938380,-0.035648334529,
	-0.035911534535,-0.036174538539,-0.036437346677,-0.036699959090,-0.036962375916,
	-0.037224597294,-0.037486623361,-0.037748454256,-0.038010090118,-0.038271531085,
	-0.038532777294,-0.038793828884,-0.039054685993,-0.039315348758,-0.039575817317,
	-0.039836091807,-0.040096172367,-0.040356059133,-0.040615752243,-0.040875251833,
	-0.041134558042,-0.041393671005,-0.041652590861,-0.041911317745,-0.042169851794,
	-0.042428193146,-0.042686341936,-0.042944298301,-0.043202062377,-0.043459634300,
	-0.043717014208,-0.043974202234,-0.044231198517,-0.044488003190,-0.044744616391,
	-0.045001038255,-0.045257268917,-0.045513308512,-0.045769157177,-0.046024815046,
	-0.046280282255,-0.046535558938,-0.046790645231,-0.047045541269,-0.047300247185,
	-0.047554763116,-0.047809089195,-0.048063225557,-0.048317172337,-0.048570929668,
	-0.048824497686,-0.049077876523,-0.049331066315,-0.049584067194,-0.049836879296,
	-0.050089502753,-0.050341937699,-0.050594184268,-0.050846242594,-0.051098112809,
	-0.051349795047,-0.051601289441,-0.051852596124,-0.052103715230,-0.052354646890,
	-0.052605391238,-0.052855948407,-0.053106318529,-0.053356501737,-0.053606498162,
	-0.053856307938,-0.054105931197,-0.054355368071,-0.054604618691,-0.054853683191,
	-0.055102561701,-0.055351254353,-0.055599761280,-0.055848082612,-0.056096218481,
	-0.056344169019,-0.056591934357,-0.056839514626,-0.057086909958,-0.057334120482,
	-0.057581146331,-0.057827987635,-0.058074644525,-0.058321117131,-0.058567405584,
	-0.058813510014,-0.059059430553,-0.059305167329,-0.059550720474,-0.059796090117,
	-0.060041276389,-0.060286279420,-0.060531099338,-0.060775736274,-0.061020190359,
	-0.061264461720,-0.061508550488,-0.061752456791,-0.061996180760,-0.062239722524,
	-0.062483082211,-0.062726259951,-0.062969255872,-0.063212070103,-0.063454702773,
	-0.063697154012,-0.063939423946,-0.064181512705,-0.064423420417,-0.064665147211,
	-0.064906693213,-0.065148058554,-0.065389243360,-0.065630247760,-0.065871071881,
	-0.066111715851,-0.066352179798,-0.066592463849,-0.066832568132,-0.067072492774,
	-0.067312237903,-0.067551803645,-0.067791190128,-0.068030397479,-0.068269425824,
	-0.068508275291,-0.068746946006,-0.068985438096,-0.069223751687,-0.069461886907,
	-0.069699843881,-0.069937622735,-0.070175223596,-0.070412646590,-0.070649891844,
	-0.070886959482,-0.071123849631,-0.071360562416,-0.071597097964,-0.071833456400,
	-0.072069637849,-0.072305642436,-0.072541470288,-0.072777121529,-0.073012596285,
	-0.073247894679,-0.073483016839,-0.073717962888,-0.073952732951,-0.074187327152,
	-0.074421745617,-0.074655988470,-0.074890055836,-0.075123947838,-0.075357664602,
	-0.075591206250,-0.075824572908,-0.076057764699,-0.076290781747,-0.076523624177,
	-0.076756292111,-0.076988785673,-0.077221104987,-0.077453250177,-0.077685221366,
	-0.077917018677,-0.078148642233,-0.078380092158,-0.078611368574,-0.078842471604,
	-0.079073401372,-0.079304158000,-0.079534741611,-0.079765152328,-0.079995390272,
	-0.080225455566,-0.080455348334,-0.080685068696,-0.080914616775,-0.081143992694,
	-0.081373196574,-0.081602228536,-0.081831088704,-0.082059777199,-0.082288294142,
	-0.082516639655,-0.082744813859,-0.082972816876,-0.083200648828,-0.083428309834,
	-0.083655800017,-0.083883119498,-0.084110268397,-0.084337246835,-0.084564054934,
	-0.084790692814,-0.085017160595,-0.085243458398,-0.085469586344,-0.085695544553,
	-0.085921333145,-0.086146952240,-0.086372401959,-0.086597682421,-0.086822793747,
	-0.087047736056,-0.087272509469,-0.087497114104,-0.087721550082,-0.087945817522,
	-0.088169916543,-0.088393847265,-0.088617609807,-0.088841204288,-0.089064630827,
	-0.089287889544,-0.089510980557,-0.089733903986,-0.089956659948,-0.090179248562,
	-0.090401669948,-0.090623924224,-0.090846011508,-0.091067931918,-0.091289685573,
	-0.091511272591,-0.091732693090,-0.091953947188,-0.092175035003,-0.092395956653,
	-0.092616712256,-0.092837301928,-0.093057725789,-0.093277983955,-0.093498076544,
	-0.093718003672,-0.093937765459,-0.094157362020,-0.094376793472,-0.094596059934,
	-0.094815161521,-0.095034098350,-0.095252870539,-0.095471478204,-0.095689921461,
	-0.095908200428,-0.096126315220,-0.096344265953,-0.096562052746,-0.096779675712,
	-0.096997134969,-0.097214430632,-0.097431562818,-0.097648531642,-0.097865337220,
	-0.098081979668,-0.098298459102,-0.098514775636,-0.098730929387,-0.098946920470,
	-0.099162748999,-0.099378415091,-0.099593918861,-0.099809260422,-0.100024439892,
	-0.100239457383,-0.100454313012,-0.100669006893,-0.100883539140,-0.101097909868,
	-0.101312119192,-0.101526167225,-0.101740054083,-0.101953779880,-0.102167344729,
	-0.102380748745,-0.102593992041,-0.102807074733,-0.103019996932,-0.103232758754,
	-0.103445360312,-0.103657801719,-0.103870083090,-0.104082204536,-0.104294166173,
	-0.104505968113,-0.104717610469,-0.104929093354,-0.105140416882,-0.105351581165,
	-0.105562586317,-0.105773432450,-0.105984119676,-0.106194648109,-0.106405017860,
	-0.106615229043,-0.106825281770,-0.107035176153,-0.107244912305,-0.107454490337,
	-0.107663910362,-0.107873172491,-0.108082276837,-0.108291223511,-0.108500012626,
	-0.108708644292,-0.108917118621,-0.109125435726,-0.109333595717,-0.109541598706,
	-0.109749444804,-0.109957134122,-0.110164666772,-0.110372042864,-0.110579262509,
	-0.110786325819,-0.110993232904,-0.111199983875,-0.111406578843,-0.111613017918,
	-0.111819301210,-0.112025428830,-0.112231400889,-0.112437217497,-0.112642878763,
	-0.112848384799,-0.113053735713,-0.113258931617,-0.113463972620,-0.113668858831,
	-0.113873590361,-0.114078167318,-0.114282589814,-0.114486857956,-0.114690971856,
	-0.114894931621,-0.115098737361,-0.115302389186,-0.115505887204,-0.115709231524,
	-0.115912422256,-0.116115459509,-0.116318343390,-0.116521074010,-0.116723651476,
	-0.116926075897,-0.117128347381,-0.117330466038,-0.117532431975,-0.117734245301,
	-0.117935906123,-0.118137414550,-0.118338770690,-0.118539974651,-0.118741026541,
	-0.118941926468,-0.119142674539,-0.119343270861,-0.119543715544,-0.119744008693,
	-0.119944150417,-0.120144140823,-0.120343980017,-0.120543668108,-0.120743205203,
	-0.120942591408,-0.121141826830,-0.121340911577,-0.121539845755,-0.121738629470,
	-0.121937262831,-0.122135745942,-0.122334078911,-0.122532261845,-0.122730294848,
	-0.122928178029,-0.123125911492,-0.123323495345,-0.123520929693,-0.123718214642,
	-0.123915350298,-0.124112336768,-0.124309174155,-0.124505862568,-0.124702402110,
	-0.124898792888,-0.125095035007,-0.125291128573,-0.125487073690,-0.125682870465,
	-0.125878519001,-0.126074019405,-0.126269371781,-0.126464576234,-0.126659632870,
	-0.126854541793,-0.127049303107,-0.127243916917,-0.127438383329,-0.127632702445,
	-0.127826874372,-0.128020899213,-0.128214777072,-0.128408508054,-0.128602092263,
	-0.128795529803,-0.128988820777,-0.129181965290,-0.129374963446,-0.129567815349,
	-0.129760521101,-0.129953080808,-0.130145494571,-0.130337762495,-0.130529884684,
	-0.130721861240,-0.130913692266,-0.131105377867,-0.131296918144,-0.131488313202,
	-0.131679563143,-0.131870668069,-0.132061628085,-0.132252443292,-0.132443113793,
	-0.132633639691,-0.132824021088,-0.133014258087,-0.133204350790,-0.133394299299,
	-0.133584103717,-0.133773764146,-0.133963280688,-0.134152653445,-0.134341882519,
	-0.134530968012,-0.134719910025,-0.134908708661,-0.135097364021,-0.135285876206,
	-0.135474245319,-0.135662471460,-0.135850554731,-0.136038495233,-0.136226293068,
	-0.136413948336,-0.136601461140,-0.136788831579,-0.136976059754,-0.137163145768,
	-0.137350089719,-0.137536891710,-0.137723551841,-0.137910070212,-0.138096446924,
	-0.138282682077,-0.138468775772,-0.138654728109,-0.138840539189,-0.139026209111,
	-0.139211737975,-0.139397125882,-0.139582372931,-0.139767479223,-0.139952444857,
	-0.140137269933,-0.140321954551,-0.140506498810,-0.140690902809,-0.140875166649,
	-0.141059290428,-0.141243274247,-0.141427118203,-0.141610822397,-0.141794386928,
	-0.141977811894,-0.142161097394,-0.142344243528,-0.142527250394,-0.142710118091,
	-0.142892846718,-0.143075436372,-0.143257887154,-0.143440199161,-0.143622372492,
	-0.143804407245,-0.143986303518,-0.144168061410,-0.144349681018,-0.144531162441,
	-0.144712505777,-0.144893711124,-0.145074778579,-0.145255708240,-0.145436500205,
	-0.145617154572,-0.145797671439,-0.145978050902,-0.146158293059,-0.146338398008,
	-0.146518365846,-0.146698196669,-0.146877890576,-0.147057447664,-0.147236868029,
	-0.147416151768,-0.147595298979,-0.147774309757,-0.147953184201,-0.148131922406,
	-0.148310524469,-0.148488990487,-0.148667320556,-0.148845514773,-0.149023573234,
	-0.149201496035,-0.149379283272,-0.149556935042,-0.149734451441,-0.149911832564,
	-0.150089078508,-0.150266189368,-0.150443165241,-0.150620006222,-0.150796712406,
	-0.150973283890,-0.151149720768,-0.151326023137,-0.151502191091,-0.151678224727,
	-0.151854124139,-0.152029889422,-0.152205520672,-0.152381017983,-0.152556381451,
	-0.152731611171,-0.152906707237,-0.153081669745,-0.153256498788,-0.153431194462,
	-0.153605756861,-0.153780186080,-0.153954482213,-0.154128645355,-0.154302675600,
	-0.154476573041,-0.154650337774,-0.154823969893,-0.154997469492,-0.155170836663,
	-0.155344071503,-0.155517174103,-0.155690144559,-0.155862982963,-0.156035689411,
	-0.156208263994,-0.156380706807,-0.156553017943,-0.156725197495,-0.156897245557,
	-0.157069162223,-0.157240947584,-0.157412601735,-0.157584124769,-0.157755516778,
	-0.157926777855,-0.158097908094,-0.158268907587,-0.158439776427,-0.158610514706,
	-0.158781122517,-0.158951599953,-0.159121947106,-0.159292164069,-0.159462250933,
	-0.159632207792,-0.159802034737,-0.159971731861,-0.160141299255,-0.160310737012,
	-0.160480045224,-0.160649223982,-0.160818273378,-0.160987193505,-0.161155984453,
	-0.161324646315,-0.161493179181,-0.161661583144,-0.161829858295,-0.161998004726,
	-0.162166022527,-0.162333911789,-0.162501672605,-0.162669305065,-0.162836809260,
	-0.163004185281,-0.163171433220,-0.163338553166,-0.163505545211,-0.163672409445,
	-0.163839145960,-0.164005754845,-0.164172236192,-0.164338590090,-0.164504816630,
	-0.164670915903,-0.164836887999,-0.165002733008,-0.165168451020,-0.165334042125,
	-0.165499506413,-0.165664843975,-0.165830054900,-0.165995139277,-0.166160097198,
	-0.166324928751,-0.166489634025,-0.166654213112,-0.166818666100,-0.166982993078,
	-0.167147194137,-0.167311269365,-0.167475218851,-0.167639042685,-0.167802740956,
	-0.167966313754,-0.168129761166,-0.168293083282,-0.168456280192,-0.168619351982,
	-0.168782298744,-0.168945120565,-0.169107817533,-0.169270389738,-0.169432837268,
	-0.169595160211,-0.169757358655,-0.169919432690,-0.170081382404,-0.170243207883,
	-0.170404909218,-0.170566486495,-0.170727939803,-0.170889269230,-0.171050474863,
	-0.171211556790,-0.171372515100,-0.171533349880,-0.171694061217,-0.171854649199,
	-0.172015113914,-0.172175455449,-0.172335673892,-0.172495769329,-0.172655741849,
	-0.172815591537,-0.172975318482,-0.173134922771,-0.173294404490,-0.173453763726,
	-0.173613000567,-0.173772115100,-0.173931107410,-0.174089977585,-0.174248725711,
	-0.174407351875,-0.174565856164,-0.174724238664,-0.174882499461,-0.175040638642,
	-0.175198656293,-0.175356552500,-0.175514327350,-0.175671980928,-0.175829513320,
	-0.175986924613,-0.176144214893,-0.176301384245,-0.176458432755,-0.176615360509,
	-0.176772167593,-0.176928854091,-0.177085420091,-0.177241865676,-0.177398190934,
	-0.177554395948,-0.177710480805,-0.177866445589,-0.178022290387,-0.178178015282,
	-0.178333620360,-0.178489105706,-0.178644471406,-0.178799717543,-0.178954844202,
	-0.179109851470,-0.179264739430,-0.179419508166,-0.179574157764,-0.179728688308,
	-0.179883099883,-0.180037392572,-0.180191566461,-0.180345621634,-0.180499558174,
	-0.180653376166,-0.180807075694,-0.180960656843,-0.181114119695,-0.181267464336,
	-0.181420690849,-0.181573799317,-0.181726789825,-0.181879662457,-0.182032417295,
	-0.182185054424,-0.182337573927,-0.182489975887,-0.182642260389,-0.182794427514,
	-0.182946477348,-0.183098409972,-0.183250225470,-0.183401923925,-0.183553505420,
	-0.183704970039,-0.183856317863,-0.184007548977,-0.184158663462,-0.184309661402,
	-0.184460542879,-0.184611307976,-0.184761956776,-0.184912489360,-0.185062905812,
	-0.185213206214,-0.185363390648,-0.185513459197,-0.185663411943,-0.185813248967,
	-0.185962970353,-0.186112576182,-0.186262066536,-0.186411441497,-0.186560701147,
	-0.186709845568,-0.186858874841,-0.187007789049,-0.187156588273,-0.187305272595,
	-0.187453842095,-0.187602296857,-0.187750636960,-0.187898862487,-0.188046973518,
	-0.188194970136,-0.188342852421,-0.188490620454,-0.188638274316,-0.188785814089,
	-0.188933239854,-0.189080551690,-0.189227749680,-0.189374833904,-0.189521804443,
	-0.189668661377,-0.189815404787,-0.189962034753,-0.190108551357,-0.190254954678,
	-0.190401244798,-0.190547421796,-0.190693485752,-0.190839436747,-0.190985274861,
	-0.191131000174,-0.191276612767,-0.191422112718,-0.191567500109,-0.191712775019,
	-0.191857937528,-0.192002987715,-0.192147925660,-0.192292751444,-0.192437465145,
	-0.192582066844,-0.192726556619,-0.192870934550,-0.193015200717,-0.193159355198,
	-0.193303398074,-0.193447329423,-0.193591149324,-0.193734857857,-0.193878455101,
	-0.194021941134,-0.194165316036,-0.194308579885,-0.194451732760,-0.194594774741,
	-0.194737705905,-0.194880526331,-0.195023236099,-0.195165835286,-0.195308323971,
	-0.195450702232,-0.195592970149,-0.195735127798,-0.195877175259,-0.196019112610,
	-0.196160939928,-0.196302657292,-0.196444264780,-0.196585762471,-0.196727150441,
	-0.196868428768,-0.197009597532,-0.197150656808,-0.197291606676,-0.197432447213,
	-0.197573178496,-0.197713800602,-0.197854313611,-0.197994717598,-0.198135012641,
	-0.198275198818,-0.198415276205,-0.198555244881,-0.198695104922,-0.198834856405,
	-0.198974499408,-0.199114034007,-0.199253460280,-0.199392778303,-0.199531988152,
	-0.199671089906,-0.199810083641,-0.199948969432,-0.200087747358,-0.200226417494,
	-0.200364979918,-0.200503434704,-0.200641781931,-0.200780021674,-0.200918154009,
	-0.201056179014,-0.201194096763,-0.201331907333,-0.201469610801,-0.201607207242,
	-0.201744696732,-0.201882079348,-0.202019355164,-0.202156524258,-0.202293586704,
	-0.202430542578,-0.202567391956,-0.202704134914,-0.202840771527,-0.202977301871,
	-0.203113726020,-0.203250044052,-0.203386256040,-0.203522362060,-0.203658362187,
	-0.203794256497,-0.203930045065,-0.204065727965,-0.204201305274,-0.204336777064,
	-0.204472143413,-0.204607404394,-0.204742560082,-0.204877610552,-0.205012555879,
	-0.205147396137,-0.205282131402,-0.205416761746,-0.205551287246,-0.205685707975,
	-0.205820024008,-0.205954235420,-0.206088342283,-0.206222344674,-0.206356242665,
	-0.206490036331,-0.206623725746,-0.206757310985,-0.206890792120,-0.207024169226,
	-0.207157442377,-0.207290611647,-0.207423677109,-0.207556638837,-0.207689496904,
	-0.207822251385,-0.207954902353,-0.208087449882,-0.208219894044,-0.208352234913,
	-0.208484472563,-0.208616607067,-0.208748638497,-0.208880566928,-0.209012392433,
	-0.209144115083,-0.209275734954,-0.209407252117,-0.209538666645,-0.209669978611,
	-0.209801188089,-0.209932295151,-0.210063299869,-0.210194202316,-0.210325002565,
	-0.210455700689,-0.210586296760,-0.210716790850,-0.210847183032,-0.210977473378,
	-0.211107661961,-0.211237748852,-0.211367734124,-0.211497617850,-0.211627400101,
	-0.211757080949,-0.211886660467,-0.212016138726,-0.212145515798,-0.212274791754,
	-0.212403966668,-0.212533040611,-0.212662013653,-0.212790885868,-0.212919657326,
	-0.213048328100,-0.213176898259,-0.213305367877,-0.213433737024,-0.213562005773,
	-0.213690174193,-0.213818242356,-0.213946210334,-0.214074078197,-0.214201846018,
	-0.214329513866,-0.214457081813,-0.214584549929,-0.214711918287,-0.214839186955,
	-0.214966356006,-0.215093425511,-0.215220395538,-0.215347266160,-0.215474037447,
	-0.215600709470,-0.215727282298,-0.215853756003,-0.215980130655,-0.216106406324,
	-0.216232583080,-0.216358660994,-0.216484640136,-0.216610520576,-0.216736302384,
	-0.216861985630,-0.216987570385,-0.217113056717,-0.217238444698,-0.217363734397,
	-0.217488925883,-0.217614019226,-0.217739014497,-0.217863911765,-0.217988711099,
	-0.218113412569,-0.218238016244,-0.218362522195,-0.218486930489,-0.218611241197,
	-0.218735454389,-0.218859570132,-0.218983588497,-0.219107509553,-0.219231333368,
	-0.219355060012,-0.219478689554,-0.219602222063,-0.219725657607,-0.219848996256,
	-0.219972238078,-0.220095383143,-0.220218431518,-0.220341383273,-0.220464238476,
	-0.220586997196,-0.220709659501,-0.220832225459,-0.220954695140,-0.221077068612,
	-0.221199345943,-0.221321527200,-0.221443612453,-0.221565601770,-0.221687495219,
	-0.221809292867,-0.221930994783,-0.222052601036,-0.222174111692,-0.222295526819,
	-0.222416846487,-0.222538070762,-0.222659199712,-0.222780233405,-0.222901171909,
	-0.223022015290,-0.223142763618,-0.223263416958,-0.223383975380,-0.223504438949,
	-0.223624807734,-0.223745081802,-0.223865261221,-0.223985346056,-0.224105336376,
	-0.224225232248,-0.224345033738,-0.224464740915,-0.224584353844,-0.224703872593,
	-0.224823297229,-0.224942627818,-0.225061864427,-0.225181007124,-0.225300055974,
	-0.225419011045,-0.225537872403,-0.225656640115,-0.225775314247,-0.225893894866,
	-0.226012382037,-0.226130775829,-0.226249076305,-0.226367283535,-0.226485397582,
	-0.226603418514,-0.226721346397,-0.226839181296,-0.226956923279,-0.227074572410,
	-0.227192128756,-0.227309592383,-0.227426963356,-0.227544241742,-0.227661427606,
	-0.227778521014,-0.227895522032,-0.228012430725,-0.228129247159,-0.228245971399,
	-0.228362603511,-0.228479143561,-0.228595591613,-0.228711947733,-0.228828211987,
	-0.228944384439,-0.229060465156,-0.229176454201,-0.229292351641,-0.229408157540,
	-0.229523871963,-0.229639494976,-0.229755026643,-0.229870467029,-0.229985816199,
	-0.230101074218,-0.230216241151,-0.230331317061,-0.230446302015,-0.230561196077,
	-0.230675999310,-0.230790711781,-0.230905333552,-0.231019864690,-0.231134305257,
	-0.231248655318,-0.231362914939,-0.231477084182,-0.231591163112,-0.231705151794,
	-0.231819050292,-0.231932858668,-0.232046576989,-0.232160205317,-0.232273743716,
	-0.232387192251,-0.232500550985,-0.232613819982,-0.232726999306,-0.232840089021,
	-0.232953089189,-0.233065999876,-0.233178821144,-0.233291553057,-0.233404195678,
	-0.233516749072,-0.233629213300,-0.233741588428,-0.233853874517,-0.233966071631,
	-0.234078179834,-0.234190199189,-0.234302129758,-0.234413971605,-0.234525724794,
	-0.234637389386,-0.234748965445,-0.234860453033,-0.234971852214,-0.235083163051,
	-0.235194385606,-0.235305519942,-0.235416566122,-0.235527524208,-0.235638394263,
	-0.235749176349,-0.235859870530,-0.235970476867,-0.236080995422,-0.236191426259,
	-0.236301769440,-0.236412025026,-0.236522193081,-0.236632273666,-0.236742266843,
	-0.236852172675,-0.236961991224,-0.237071722551,-0.237181366719,-0.237290923790,
	-0.237400393825,-0.237509776887,-0.237619073036,-0.237728282336,-0.237837404848,
	-0.237946440633,-0.238055389752,-0.238164252269,-0.238273028243,-0.238381717738,
	-0.238490320813,-0.238598837531,-0.238707267952,-0.238815612139,-0.238923870153,
	-0.239032042054,-0.239140127904,-0.239248127764,-0.239356041696,-0.239463869759,
	-0.239571612016,-0.239679268528,-0.239786839354,-0.239894324557,-0.240001724197,
	-0.240109038335,-0.240216267031,-0.240323410346,-0.240430468342,-0.240537441078,
	-0.240644328615,-0.240751131014,-0.240857848336,-0.240964480640,-0.241071027988,
	-0.241177490439,-0.241283868054,-0.241390160893,-0.241496369016,-0.241602492485,
	-0.241708531358,-0.241814485696,-0.241920355559,-0.242026141008,-0.242131842101,
	-0.242237458900,-0.242342991464,-0.242448439852,-0.242553804125,-0.242659084343,
	-0.242764280565,-0.242869392851,-0.242974421260,-0.243079365853,-0.243184226689,
	-0.243289003827,-0.243393697326,-0.243498307247,-0.243602833649,-0.243707276591,
	-0.243811636132,-0.243915912332,-0.244020105250,-0.244124214945,-0.244228241476,
	-0.244332184903,-0.244436045283,-0.244539822678,-0.244643517145,-0.244747128744,
	-0.244850657533,-0.244954103571,-0.245057466917,-0.245160747630,-0.245263945769,
	-0.245367061392,-0.245470094557,-0.245573045325,-0.245675913752,-0.245778699898,
	-0.245881403822,-0.245984025581,-0.246086565234,-0.246189022839,-0.246291398455,
	-0.246393692141,-0.246495903953,-0.246598033951,-0.246700082192,-0.246802048736,
	-0.246903933639,-0.247005736960,-0.247107458756,-0.247209099087,-0.247310658009,
	-0.247412135581,-0.247513531861,-0.247614846905,-0.247716080773,-0.247817233522,
	-0.247918305208,-0.248019295891,-0.248120205628,-0.248221034475,-0.248321782492,
	-0.248422449734,-0.248523036260,-0.248623542127,-0.248723967392,-0.248824312113,
	-0.248924576347,-0.249024760151,-0.249124863582,-0.249224886698,-0.249324829555,
	-0.249424692211,-0.249524474722,-0.249624177146,-0.249723799540,-0.249823341960,
	-0.249922804463,-0.250022187106,-0.250121489947,-0.250220713041,-0.250319856445,
	-0.250418920217,-0.250517904412,-0.250616809087,-0.250715634299,-0.250814380105,
	-0.250913046560,-0.251011633721,-0.251110141645,-0.251208570388,-0.251306920006,
	-0.251405190555,-0.251503382092,-0.251601494673,-0.251699528354,-0.251797483191,
	-0.251895359240,-0.251993156558,-0.252090875199,-0.252188515221,-0.252286076679,
	-0.252383559629,-0.252480964126,-0.252578290227,-0.252675537987,-0.252772707462,
	-0.252869798708,-0.252966811780,-0.253063746734,-0.253160603626,-0.253257382510,
	-0.253354083443,-0.253450706479,-0.253547251675,-0.253643719085,-0.253740108766,
	-0.253836420771,-0.253932655157,-0.254028811979,-0.254124891291,-0.254220893149,
	-0.254316817608,-0.254412664723,-0.254508434550,-0.254604127142,-0.254699742555,
	-0.254795280844,-0.254890742064,-0.254986126269,-0.255081433514,-0.255176663854,
	-0.255271817344,-0.255366894039,-0.255461893992,-0.255556817259,-0.255651663893,
	-0.255746433951,-0.255841127485,-0.255935744551,-0.256030285203,-0.256124749495,
	-0.256219137481,-0.256313449216,-0.256407684754,-0.256501844150,-0.256595927456,
	-0.256689934729,-0.256783866020,-0.256877721386,-0.256971500878,-0.257065204553,
	-0.257158832463,-0.257252384662,-0.257345861204,-0.257439262144,-0.257532587534,
	-0.257625837429,-0.257719011882,-0.257812110947,-0.257905134678,-0.257998083127,
	-0.258090956349,-0.258183754398,-0.258276477326,-0.258369125187,-0.258461698035,
	-0.258554195922,-0.258646618902,-0.258738967029,-0.258831240356,-0.258923438936,
	-0.259015562821,-0.259107612066,-0.259199586723,-0.259291486845,-0.259383312486,
	-0.259475063697,-0.259566740534,-0.259658343047,-0.259749871291,-0.259841325317,
	-0.259932705179,-0.260024010929,-0.260115242621,-0.260206400306,-0.260297484038,
	-0.260388493869,-0.260479429852,-0.260570292039,-0.260661080482,-0.260751795235,
	-0.260842436349,-0.260933003877,-0.261023497872,-0.261113918385,-0.261204265469,
	-0.261294539176,-0.261384739558,-0.261474866668,-0.261564920558,-0.261654901279,
	-0.261744808884,-0.261834643425,-0.261924404954,-0.262014093522,-0.262103709182,
	-0.262193251986,-0.262282721985,-0.262372119230,-0.262461443775,-0.262550695671,
	-0.262639874968,-0.262728981720,-0.262818015977,-0.262906977791,-0.262995867214,
	-0.263084684298,-0.263173429092,-0.263262101650,-0.263350702023,-0.263439230261,
	-0.263527686416,-0.263616070540,-0.263704382683,-0.263792622898,-0.263880791234,
	-0.263968887744,-0.264056912478,-0.264144865487,-0.264232746823,-0.264320556537,
	-0.264408294678,-0.264495961299,-0.264583556450,-0.264671080183,-0.264758532547,
	-0.264845913594,-0.264933223374,-0.265020461938,-0.265107629337,-0.265194725622,
	-0.265281750842,-0.265368705049,-0.265455588294,-0.265542400626,-0.265629142096,
	-0.265715812754,-0.265802412652,-0.265888941838,-0.265975400364,-0.266061788281,
	-0.266148105637,-0.266234352483,-0.266320528870,-0.266406634848,-0.266492670466,
	-0.266578635775,-0.266664530825,-0.266750355666,-0.266836110347,-0.266921794919,
	-0.267007409432,-0.267092953935,-0.267178428479,-0.267263833112,-0.267349167886,
	-0.267434432849,-0.267519628051,-0.267604753542,-0.267689809371,-0.267774795589,
	-0.267859712244,-0.267944559386,-0.268029337065,-0.268114045330,-0.268198684230,
	-0.268283253815,-0.268367754134,-0.268452185236,-0.268536547171,-0.268620839988,
	-0.268705063736,-0.268789218465,-0.268873304222,-0.268957321058,-0.269041269022,
	-0.269125148162,-0.269208958527,-0.269292700167,-0.269376373131,-0.269459977466,
	-0.269543513223,-0.269626980449,-0.269710379195,-0.269793709507,-0.269876971436,
	-0.269960165029,-0.270043290336,-0.270126347405,-0.270209336285,-0.270292257023,
	-0.270375109670,-0.270457894272,-0.270540610879,-0.270623259539,-0.270705840300,
	-0.270788353211,-0.270870798319,-0.270953175674,-0.271035485323,-0.271117727315,
	-0.271199901698,-0.271282008519,-0.271364047828,-0.271446019671,-0.271527924098,
	-0.271609761156,-0.271691530892,-0.271773233356,-0.271854868594,-0.271936436655,
	-0.272017937587,-0.272099371436,-0.272180738252,-0.272262038082,-0.272343270973,
	-0.272424436973,-0.272505536130,-0.272586568491,-0.272667534103,-0.272748433016,
	-0.272829265275,-0.272910030928,-0.272990730023,-0.273071362607,-0.273151928728,
	-0.273232428432,-0.273312861767,-0.273393228781,-0.273473529520,-0.273553764031,
	-0.273633932363,-0.273714034562,-0.273794070674,-0.273874040747,-0.273953944829,
	-0.274033782966,-0.274113555205,-0.274193261592,-0.274272902176,-0.274352477002,
	-0.274431986117,-0.274511429569,-0.274590807404,-0.274670119669,-0.274749366410,
	-0.274828547674,-0.274907663507,-0.274986713957,-0.275065699070,-0.275144618892,
	-0.275223473470,-0.275302262850,-0.275380987079,-0.275459646203,-0.275538240269,
	-0.275616769322,-0.275695233409,-0.275773632577,-0.275851966871,-0.275930236338,
	-0.276008441024,-0.276086580975,-0.276164656236,-0.276242666855,-0.276320612878,
	-0.276398494349,-0.276476311316,-0.276554063823,-0.276631751918,-0.276709375646,
	-0.276786935052,-0.276864430183,-0.276941861083,-0.277019227800,-0.277096530379,
	-0.277173768865,-0.277250943304,-0.277328053742,-0.277405100224,-0.277482082795,
	-0.277559001502,-0.277635856390,-0.277712647504,-0.277789374889,-0.277866038591,
	-0.277942638656,-0.278019175128,-0.278095648054,-0.278172057477,-0.278248403444,
	-0.278324685999,-0.278400905188,-0.278477061056,-0.278553153649,-0.278629183010,
	-0.278705149185,-0.278781052219,-0.278856892157,-0.278932669044,-0.279008382926,
	-0.279084033845,-0.279159621849,-0.279235146981,-0.279310609286,-0.279386008809,
	-0.279461345594,-0.279536619687,-0.279611831132,-0.279686979973,-0.279762066256,
	-0.279837090024,-0.279912051323,-0.279986950196,-0.280061786689,-0.280136560845,
	-0.280211272709,-0.280285922326,-0.280360509739,-0.280435034994,-0.280509498134,
	-0.280583899203,-0.280658238246,-0.280732515307,-0.280806730430,-0.280880883659,
	-0.280954975039,-0.281029004613,-0.281102972425,-0.281176878520,-0.281250722941,
	-0.281324505733,-0.281398226938,-0.281471886602,-0.281545484767,-0.281619021478,
	-0.281692496779,-0.281765910713,-0.281839263323,-0.281912554655,-0.281985784750,
	-0.282058953654,-0.282132061408,-0.282205108058,-0.282278093647,-0.282351018217,
	-0.282423881813,-0.282496684478,-0.282569426255,-0.282642107188,-0.282714727320,
	-0.282787286695,-0.282859785355,-0.282932223344,-0.283004600705,-0.283076917482,
	-0.283149173717,-0.283221369453,-0.283293504735,-0.283365579604,-0.283437594104,
	-0.283509548278,-0.283581442168,-0.283653275819,-0.283725049272,-0.283796762570,
	-0.283868415757,-0.283940008876,-0.284011541968,-0.284083015077,-0.284154428246,
	-0.284225781517,-0.284297074933,-0.284368308537,-0.284439482371,-0.284510596477,
	-0.284581650899,-0.284652645679,-0.284723580859,-0.284794456481,-0.284865272590,
	-0.284936029225,-0.285006726431,-0.285077364249,-0.285147942722,-0.285218461892,
	-0.285288921801,-0.285359322492,-0.285429664006,-0.285499946386,-0.285570169674,
	-0.285640333912,-0.285710439142,-0.285780485407,-0.285850472747,-0.285920401206,
	-0.285990270825,-0.286060081646,-0.286129833711,-0.286199527061,-0.286269161740,
	-0.286338737788,-0.286408255247,-0.286477714159,-0.286547114566,-0.286616456509,
	-0.286685740031,-0.286754965172,-0.286824131974,-0.286893240480,-0.286962290730,
	-0.287031282765,-0.287100216629,-0.287169092361,-0.287237910003,-0.287306669597,
	-0.287375371185,-0.287444014806,-0.287512600504,-0.287581128318,-0.287649598291,
	-0.287718010463,-0.287786364876,-0.287854661571,-0.287922900588,-0.287991081970,
	-0.288059205757,-0.288127271990,-0.288195280711,-0.288263231960,-0.288331125777,
	-0.288398962205,-0.288466741284,-0.288534463055,-0.288602127559,-0.288669734836,
	-0.288737284928,-0.288804777874,-0.288872213717,-0.288939592496,-0.289006914252,
	-0.289074179026,-0.289141386859,-0.289208537790,-0.289275631861,-0.289342669113,
	-0.289409649585,-0.289476573318,-0.289543440352,-0.289610250729,-0.289677004488,
	-0.289743701669,-0.289810342314,-0.289876926462,-0.289943454154,-0.290009925429,
	-0.290076340329,-0.290142698892,-0.290209001160,-0.290275247173,-0.290341436971,
	-0.290407570593,-0.290473648079,-0.290539669471,-0.290605634807,-0.290671544128,
	-0.290737397474,-0.290803194885,-0.290868936399,-0.290934622058,-0.291000251901,
	-0.291065825968,-0.291131344299,-0.291196806933,-0.291262213910,-0.291327565270,
	-0.291392861052,-0.291458101297,-0.291523286042,-0.291588415330,-0.291653489198,
	-0.291718507686,-0.291783470834,-0.291848378681,-0.291913231266,-0.291978028630,
	-0.292042770811,-0.292107457849,-0.292172089783,-0.292236666652,-0.292301188496,
	-0.292365655353,-0.292430067264,-0.292494424267,-0.292558726401,-0.292622973705,
	-0.292687166220,-0.292751303982,-0.292815387033,-0.292879415410,-0.292943389153,
	-0.293007308300,-0.293071172891,-0.293134982965,-0.293198738559,-0.293262439714,
	-0.293326086468,-0.293389678860,-0.293453216928,-0.293516700711,-0.293580130249,
	-0.293643505579,-0.293706826740,-0.293770093772,-0.293833306711,-0.293896465598,
	-0.293959570471,-0.294022621368,-0.294085618327,-0.294148561388,-0.294211450588,
	-0.294274285966,-0.294337067560,-0.294399795410,-0.294462469552,-0.294525090025,
	-0.294587656868,-0.294650170119,-0.294712629817,-0.294775035998,-0.294837388702,
	-0.294899687966,-0.294961933829,-0.295024126328,-0.295086265503,-0.295148351390,
	-0.295210384029,-0.295272363456,-0.295334289709,-0.295396162828,-0.295457982849,
	-0.295519749811,-0.295581463750,-0.295643124707,-0.295704732716,-0.295766287818,
	-0.295827790049,-0.295889239447,-0.295950636050,-0.296011979895,-0.296073271021,
	-0.296134509464,-0.296195695262,-0.296256828453,-0.296317909075,-0.296378937164,
	-0.296439912759,-0.296500835896,-0.296561706614,-0.296622524949,-0.296683290939,
	-0.296744004621,-0.296804666033,-0.296865275212,-0.296925832195,-0.296986337019,
	-0.297046789721,-0.297107190340,-0.297167538911,-0.297227835472,-0.297288080061,
	-0.297348272713,-0.297408413467,-0.297468502359,-0.297528539426,-0.297588524706,
	-0.297648458234,-0.297708340049,-0.297768170187,-0.297827948684,-0.297887675578,
	-0.297947350906,-0.298006974704,-0.298066547009,-0.298126067858,-0.298185537287,
	-0.298244955333,-0.298304322033,-0.298363637424,-0.298422901542,-0.298482114423,
	-0.298541276104,-0.298600386622,-0.298659446014,-0.298718454315,-0.298777411562,
	-0.298836317792,-0.298895173041,-0.298953977345,-0.299012730741,-0.299071433265,
	-0.299130084953,-0.299188685841,-0.299247235967,-0.299305735365,-0.299364184073,
	-0.299422582127,-0.299480929561,-0.299539226414,-0.299597472720,-0.299655668516,
	-0.299713813838,-0.299771908721,-0.299829953203,-0.299887947319,-0.299945891104,
	-0.300003784595,-0.300061627827,-0.300119420837
	}
};

double always_inline s10_stage9_negclip(double x) {
    double f = fabs(x);
    f = f * s10_stage9_neg_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = s10_stage9_neg_table.data[0];
    } else if (i >= s10_stage9_neg_table.size-1) {
        f = s10_stage9_neg_table.data[s10_stage9_neg_table.size-1];
    } else {
        f -= i;
        f = s10_stage9_neg_table.data[i]*(1-f) + s10_stage9_neg_table.data[i+1]*f;
    }
    return copysign(f, x);
}

