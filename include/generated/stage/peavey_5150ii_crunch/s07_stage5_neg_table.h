
// s07_stage5_neg_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  -10.000000
 // --table_div  262.519430
 // --table_op  1.000000

struct tables07_stage5_neg { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tables07_stage5_neg_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tables07_stage5_neg&() const { return *(tables07_stage5_neg*)this; }
};

static tables07_stage5_neg_imp<2048> s07_stage5_neg_table __rt_data = {
	0,0.235373,204.7,2048, {
	0.000000000000,0.000539600385,0.000789806290,0.001051108864,0.001311883125,
	0.001572575991,0.001833170329,0.002093666765,0.002354065252,0.002614365765,
	0.002874568281,0.003134672775,0.003394679221,0.003654587596,0.003914397875,
	0.004174110032,0.004433724044,0.004693239884,0.004952657528,0.005211976950,
	0.005471198126,0.005730321030,0.005989345636,0.006248271919,0.006507099853,
	0.006765829413,0.007024460573,0.007282993307,0.007541427588,0.007799763392,
	0.008058000692,0.008316139461,0.008574179673,0.008832121302,0.009089964322,
	0.009347708705,0.009605354425,0.009862901456,0.010120349770,0.010377699341,
	0.010634950142,0.010892102145,0.011149155323,0.011406109649,0.011662965096,
	0.011919721636,0.012176379241,0.012432937885,0.012689397538,0.012945758174,
	0.013202019764,0.013458182281,0.013714245696,0.013970209981,0.014226075108,
	0.014481841048,0.014737507773,0.014993075254,0.015248543463,0.015503912371,
	0.015759181949,0.016014352168,0.016269422999,0.016524394413,0.016779266380,
	0.017034038872,0.017288711859,0.017543285311,0.017797759199,0.018052133493,
	0.018306408163,0.018560583179,0.018814658512,0.019068634130,0.019322510005,
	0.019576286106,0.019829962401,0.020083538862,0.020337015457,0.020590392155,
	0.020843668926,0.021096845739,0.021349922562,0.021602899366,0.021855776118,
	0.022108552787,0.022361229342,0.022613805751,0.022866281983,0.023118658006,
	0.023370933788,0.023623109298,0.023875184503,0.024127159371,0.024379033871,
	0.024630807969,0.024882481633,0.025134054831,0.025385527530,0.025636899698,
	0.025888171301,0.026139342307,0.026390412683,0.026641382395,0.026892251410,
	0.027143019695,0.027393687216,0.027644253941,0.027894719834,0.028145084863,
	0.028395348993,0.028645512190,0.028895574421,0.029145535651,0.029395395846,
	0.029645154971,0.029894812992,0.030144369874,0.030393825582,0.030643180082,
	0.030892433338,0.031141585316,0.031390635980,0.031639585295,0.031888433225,
	0.032137179736,0.032385824790,0.032634368353,0.032882810389,0.033131150862,
	0.033379389734,0.033627526972,0.033875562537,0.034123496394,0.034371328505,
	0.034619058835,0.034866687347,0.035114214003,0.035361638767,0.035608961601,
	0.035856182468,0.036103301331,0.036350318153,0.036597232895,0.036844045520,
	0.037090755991,0.037337364268,0.037583870315,0.037830274093,0.038076575563,
	0.038322774687,0.038568871427,0.038814865744,0.039060757600,0.039306546954,
	0.039552233769,0.039797818004,0.040043299622,0.040288678581,0.040533954844,
	0.040779128370,0.041024199119,0.041269167052,0.041514032128,0.041758794307,
	0.042003453550,0.042248009815,0.042492463062,0.042736813251,0.042981060341,
	0.043225204291,0.043469245059,0.043713182605,0.043957016888,0.044200747865,
	0.044444375496,0.044687899739,0.044931320552,0.045174637892,0.045417851719,
	0.045660961990,0.045903968663,0.046146871694,0.046389671042,0.046632366664,
	0.046874958517,0.047117446558,0.047359830744,0.047602111032,0.047844287378,
	0.048086359739,0.048328328072,0.048570192332,0.048811952475,0.049053608458,
	0.049295160236,0.049536607766,0.049777951002,0.050019189901,0.050260324416,
	0.050501354504,0.050742280120,0.050983101218,0.051223817754,0.051464429681,
	0.051704936954,0.051945339528,0.052185637357,0.052425830394,0.052665918595,
	0.052905901911,0.053145780298,0.053385553708,0.053625222095,0.053864785412,
	0.054104243613,0.054343596649,0.054582844474,0.054821987040,0.055061024301,
	0.055299956207,0.055538782712,0.055777503768,0.056016119326,0.056254629338,
	0.056493033755,0.056731332530,0.056969525613,0.057207612956,0.057445594509,
	0.057683470224,0.057921240051,0.058158903941,0.058396461844,0.058633913711,
	0.058871259491,0.059108499134,0.059345632591,0.059582659811,0.059819580743,
	0.060056395337,0.060293103542,0.060529705307,0.060766200581,0.061002589313,
	0.061238871451,0.061475046943,0.061711115739,0.061947077785,0.062182933031,
	0.062418681423,0.062654322910,0.062889857439,0.063125284957,0.063360605411,
	0.063595818749,0.063830924917,0.064065923862,0.064300815530,0.064535599868,
	0.064770276822,0.065004846338,0.065239308362,0.065473662839,0.065707909716,
	0.065942048937,0.066176080448,0.066410004194,0.066643820120,0.066877528169,
	0.067111128288,0.067344620420,0.067578004510,0.067811280501,0.068044448338,
	0.068277507964,0.068510459323,0.068743302357,0.068976037012,0.069208663228,
	0.069441180950,0.069673590119,0.069905890679,0.070138082572,0.070370165740,
	0.070602140125,0.070834005668,0.071065762312,0.071297409998,0.071528948667,
	0.071760378260,0.071991698719,0.072222909984,0.072454011995,0.072685004693,
	0.072915888019,0.073146661912,0.073377326312,0.073607881159,0.073838326392,
	0.074068661951,0.074298887776,0.074529003804,0.074759009974,0.074988906226,
	0.075218692498,0.075448368728,0.075677934853,0.075907390813,0.076136736544,
	0.076365971984,0.076595097070,0.076824111740,0.077053015930,0.077281809578,
	0.077510492619,0.077739064990,0.077967526627,0.078195877467,0.078424117444,
	0.078652246496,0.078880264556,0.079108171561,0.079335967445,0.079563652142,
	0.079791225589,0.080018687719,0.080246038466,0.080473277765,0.080700405549,
	0.080927421753,0.081154326308,0.081381119150,0.081607800210,0.081834369421,
	0.082060826717,0.082287172030,0.082513405292,0.082739526435,0.082965535391,
	0.083191432091,0.083417216467,0.083642888451,0.083868447973,0.084093894964,
	0.084319229355,0.084544451076,0.084769560058,0.084994556230,0.085219439522,
	0.085444209865,0.085668867186,0.085893411416,0.086117842483,0.086342160316,
	0.086566364844,0.086790455994,0.087014433696,0.087238297877,0.087462048465,
	0.087685685386,0.087909208569,0.088132617941,0.088355913428,0.088579094956,
	0.088802162453,0.089025115845,0.089247955056,0.089470680014,0.089693290644,
	0.089915786870,0.090138168619,0.090360435814,0.090582588381,0.090804626243,
	0.091026549326,0.091248357553,0.091470050847,0.091691629133,0.091913092333,
	0.092134440370,0.092355673168,0.092576790649,0.092797792736,0.093018679349,
	0.093239450412,0.093460105847,0.093680645573,0.093901069513,0.094121377588,
	0.094341569719,0.094561645825,0.094781605827,0.095001449645,0.095221177200,
	0.095440788410,0.095660283195,0.095879661473,0.096098923165,0.096318068188,
	0.096537096461,0.096756007901,0.096974802427,0.097193479957,0.097412040408,
	0.097630483696,0.097848809739,0.098067018454,0.098285109757,0.098503083563,
	0.098720939790,0.098938678352,0.099156299166,0.099373802146,0.099591187206,
	0.099808454263,0.100025603230,0.100242634022,0.100459546552,0.100676340733,
	0.100893016481,0.101109573706,0.101326012324,0.101542332245,0.101758533383,
	0.101974615649,0.102190578956,0.102406423215,0.102622148337,0.102837754234,
	0.103053240816,0.103268607994,0.103483855678,0.103698983779,0.103913992205,
	0.104128880867,0.104343649673,0.104558298533,0.104772827355,0.104987236048,
	0.105201524520,0.105415692679,0.105629740432,0.105843667687,0.106057474351,
	0.106271160331,0.106484725532,0.106698169862,0.106911493227,0.107124695531,
	0.107337776681,0.107550736582,0.107763575138,0.107976292254,0.108188887835,
	0.108401361784,0.108613714006,0.108825944403,0.109038052878,0.109250039336,
	0.109461903678,0.109673645806,0.109885265623,0.110096763031,0.110308137930,
	0.110519390223,0.110730519809,0.110941526590,0.111152410466,0.111363171336,
	0.111573809102,0.111784323661,0.111994714913,0.112204982757,0.112415127091,
	0.112625147815,0.112835044825,0.113044818019,0.113254467294,0.113463992549,
	0.113673393678,0.113882670580,0.114091823149,0.114300851283,0.114509754875,
	0.114718533822,0.114927188019,0.115135717359,0.115344121738,0.115552401049,
	0.115760555187,0.115968584043,0.116176487512,0.116384265486,0.116591917858,
	0.116799444519,0.117006845362,0.117214120278,0.117421269159,0.117628291894,
	0.117835188374,0.118041958491,0.118248602133,0.118455119191,0.118661509553,
	0.118867773108,0.119073909745,0.119279919353,0.119485801819,0.119691557031,
	0.119897184876,0.120102685241,0.120308058013,0.120513303078,0.120718420323,
	0.120923409632,0.121128270891,0.121333003985,0.121537608799,0.121742085217,
	0.121946433124,0.122150652401,0.122354742934,0.122558704605,0.122762537296,
	0.122966240890,0.123169815269,0.123373260315,0.123576575908,0.123779761930,
	0.123982818261,0.124185744781,0.124388541371,0.124591207909,0.124793744276,
	0.124996150349,0.125198426007,0.125400571129,0.125602585593,0.125804469274,
	0.126006222052,0.126207843802,0.126409334401,0.126610693724,0.126811921648,
	0.127013018048,0.127213982798,0.127414815774,0.127615516849,0.127816085897,
	0.128016522791,0.128216827406,0.128416999613,0.128617039285,0.128816946294,
	0.129016720512,0.129216361809,0.129415870058,0.129615245127,0.129814486888,
	0.130013595210,0.130212569963,0.130411411016,0.130610118236,0.130808691494,
	0.131007130656,0.131205435590,0.131403606163,0.131601642242,0.131799543693,
	0.131997310383,0.132194942176,0.132392438939,0.132589800536,0.132787026831,
	0.132984117689,0.133181072973,0.133377892546,0.133574576272,0.133771124013,
	0.133967535631,0.134163810988,0.134359949944,0.134555952362,0.134751818102,
	0.134947547023,0.135143138985,0.135338593848,0.135533911471,0.135729091712,
	0.135924134430,0.136119039482,0.136313806725,0.136508436016,0.136702927213,
	0.136897280171,0.137091494745,0.137285570791,0.137479508164,0.137673306719,
	0.137866966309,0.138060486788,0.138253868010,0.138447109826,0.138640212090,
	0.138833174654,0.139025997369,0.139218680086,0.139411222656,0.139603624930,
	0.139795886757,0.139988007986,0.140179988467,0.140371828048,0.140563526578,
	0.140755083905,0.140946499874,0.141137774335,0.141328907132,0.141519898113,
	0.141710747122,0.141901454005,0.142092018607,0.142282440772,0.142472720344,
	0.142662857165,0.142852851081,0.143042701932,0.143232409561,0.143421973810,
	0.143611394520,0.143800671531,0.143989804685,0.144178793821,0.144367638778,
	0.144556339396,0.144744895514,0.144933306968,0.145121573598,0.145309695240,
	0.145497671731,0.145685502907,0.145873188605,0.146060728659,0.146248122905,
	0.146435371177,0.146622473310,0.146809429137,0.146996238490,0.147182901204,
	0.147369417109,0.147555786039,0.147742007823,0.147928082294,0.148114009281,
	0.148299788614,0.148485420123,0.148670903636,0.148856238983,0.149041425992,
	0.149226464489,0.149411354303,0.149596095259,0.149780687184,0.149965129904,
	0.150149423243,0.150333567028,0.150517561081,0.150701405227,0.150885099289,
	0.151068643090,0.151252036452,0.151435279198,0.151618371149,0.151801312124,
	0.151984101947,0.152166740435,0.152349227408,0.152531562687,0.152713746088,
	0.152895777431,0.153077656532,0.153259383209,0.153440957279,0.153622378557,
	0.153803646859,0.153984762000,0.154165723795,0.154346532058,0.154527186603,
	0.154707687242,0.154888033789,0.155068226055,0.155248263853,0.155428146993,
	0.155607875286,0.155787448543,0.155966866572,0.156146129183,0.156325236186,
	0.156504187387,0.156682982595,0.156861621616,0.157040104259,0.157218430328,
	0.157396599629,0.157574611967,0.157752467148,0.157930164975,0.158107705252,
	0.158285087783,0.158462312369,0.158639378812,0.158816286916,0.158993036479,
	0.159169627304,0.159346059191,0.159522331938,0.159698445345,0.159874399210,
	0.160050193332,0.160225827508,0.160401301535,0.160576615209,0.160751768327,
	0.160926760684,0.161101592075,0.161276262295,0.161450771136,0.161625118394,
	0.161799303860,0.161973327326,0.162147188586,0.162320887430,0.162494423649,
	0.162667797033,0.162841007372,0.163014054456,0.163186938072,0.163359658010,
	0.163532214057,0.163704606000,0.163876833625,0.164048896720,0.164220795069,
	0.164392528458,0.164564096671,0.164735499492,0.164906736705,0.165077808092,
	0.165248713437,0.165419452521,0.165590025126,0.165760431032,0.165930670020,
	0.166100741870,0.166270646360,0.166440383271,0.166609952380,0.166779353465,
	0.166948586303,0.167117650670,0.167286546344,0.167455273099,0.167623830712,
	0.167792218955,0.167960437605,0.168128486433,0.168296365214,0.168464073719,
	0.168631611721,0.168798978991,0.168966175300,0.169133200418,0.169300054116,
	0.169466736163,0.169633246327,0.169799584377,0.169965750081,0.170131743206,
	0.170297563519,0.170463210786,0.170628684773,0.170793985245,0.170959111966,
	0.171124064701,0.171288843214,0.171453447267,0.171617876624,0.171782131046,
	0.171946210294,0.172110114131,0.172273842316,0.172437394610,0.172600770771,
	0.172763970560,0.172926993734,0.173089840052,0.173252509271,0.173415001147,
	0.173577315438,0.173739451899,0.173901410286,0.174063190353,0.174224791856,
	0.174386214547,0.174547458180,0.174708522509,0.174869407285,0.175030112261,
	0.175190637187,0.175350981815,0.175511145895,0.175671129177,0.175830931411,
	0.175990552345,0.176149991727,0.176309249306,0.176468324828,0.176627218042,
	0.176785928693,0.176944456527,0.177102801290,0.177260962726,0.177418940580,
	0.177576734597,0.177734344519,0.177891770090,0.178049011052,0.178206067148,
	0.178362938118,0.178519623705,0.178676123648,0.178832437688,0.178988565565,
	0.179144507018,0.179300261786,0.179455829606,0.179611210218,0.179766403358,
	0.179921408763,0.180076226170,0.180230855315,0.180385295934,0.180539547761,
	0.180693610532,0.180847483980,0.181001167840,0.181154661845,0.181307965727,
	0.181461079220,0.181614002055,0.181766733964,0.181919274679,0.182071623929,
	0.182223781446,0.182375746960,0.182527520199,0.182679100894,0.182830488772,
	0.182981683563,0.183132684994,0.183283492792,0.183434106685,0.183584526399,
	0.183734751661,0.183884782197,0.184034617731,0.184184257990,0.184333702698,
	0.184482951580,0.184632004359,0.184780860759,0.184929520503,0.185077983315,
	0.185226248917,0.185374317031,0.185522187378,0.185669859681,0.185817333661,
	0.185964609038,0.186111685532,0.186258562865,0.186405240756,0.186551718923,
	0.186697997087,0.186844074966,0.186989952279,0.187135628744,0.187281104079,
	0.187426378001,0.187571450227,0.187716320476,0.187860988463,0.188005453904,
	0.188149716517,0.188293776017,0.188437632119,0.188581284538,0.188724732991,
	0.188867977192,0.189011016855,0.189153851694,0.189296481424,0.189438905759,
	0.189581124412,0.189723137096,0.189864943526,0.190006543413,0.190147936470,
	0.190289122411,0.190430100946,0.190570871790,0.190711434652,0.190851789246,
	0.190991935283,0.191131872474,0.191271600531,0.191411119165,0.191550428086,
	0.191689527006,0.191828415634,0.191967093683,0.192105560862,0.192243816881,
	0.192381861451,0.192519694281,0.192657315083,0.192794723565,0.192931919437,
	0.193068902410,0.193205672192,0.193342228494,0.193478571024,0.193614699493,
	0.193750613610,0.193886313084,0.194021797624,0.194157066941,0.194292120743,
	0.194426958739,0.194561580639,0.194695986152,0.194830174988,0.194964146856,
	0.195097901465,0.195231438524,0.195364757744,0.195497858834,0.195630741503,
	0.195763405461,0.195895850418,0.196028076084,0.196160082168,0.196291868381,
	0.196423434432,0.196554780033,0.196685904894,0.196816808724,0.196947491235,
	0.197077952139,0.197208191144,0.197338207964,0.197468002310,0.197597573893,
	0.197726922424,0.197856047616,0.197984949182,0.198113626834,0.198242080284,
	0.198370309245,0.198498313432,0.198626092557,0.198753646334,0.198880974477,
	0.199008076702,0.199134952722,0.199261602253,0.199388025010,0.199514220709,
	0.199640189066,0.199765929798,0.199891442622,0.200016727255,0.200141783414,
	0.200266610818,0.200391209186,0.200515578236,0.200639717688,0.200763627262,
	0.200887306678,0.201010755657,0.201133973921,0.201256961191,0.201379717190,
	0.201502241641,0.201624534267,0.201746594792,0.201868422942,0.201990018441,
	0.202111381015,0.202232510391,0.202353406295,0.202474068456,0.202594496601,
	0.202714690460,0.202834649763,0.202954374239,0.203073863621,0.203193117638,
	0.203312136026,0.203430918515,0.203549464841,0.203667774738,0.203785847943,
	0.203903684190,0.204021283218,0.204138644765,0.204255768569,0.204372654369,
	0.204489301908,0.204605710926,0.204721881165,0.204837812369,0.204953504281,
	0.205068956648,0.205184169215,0.205299141730,0.205413873940,0.205528365594,
	0.205642616443,0.205756626237,0.205870394729,0.205983921672,0.206097206820,
	0.206210249930,0.206323050756,0.206435609057,0.206547924592,0.206659997120,
	0.206771826403,0.206883412203,0.206994754284,0.207105852409,0.207216706346,
	0.207327315861,0.207437680723,0.207547800702,0.207657675568,0.207767305094,
	0.207876689055,0.207985827224,0.208094719378,0.208203365296,0.208311764756,
	0.208419917539,0.208527823427,0.208635482204,0.208742893655,0.208850057566,
	0.208956973726,0.209063641923,0.209170061949,0.209276233597,0.209382156661,
	0.209487830937,0.209593256221,0.209698432314,0.209803359015,0.209908036128,
	0.210012463456,0.210116640806,0.210220567983,0.210324244798,0.210427671063,
	0.210530846588,0.210633771189,0.210736444683,0.210838866887,0.210941037621,
	0.211042956708,0.211144623970,0.211246039235,0.211347202328,0.211448113080,
	0.211548771322,0.211649176888,0.211749329613,0.211849229334,0.211948875891,
	0.212048269125,0.212147408880,0.212246295001,0.212344927337,0.212443305736,
	0.212541430052,0.212639300138,0.212736915850,0.212834277047,0.212931383590,
	0.213028235341,0.213124832166,0.213221173933,0.213317260510,0.213413091771,
	0.213508667589,0.213603987841,0.213699052406,0.213793861166,0.213888414005,
	0.213982710808,0.214076751464,0.214170535866,0.214264063905,0.214357335478,
	0.214450350484,0.214543108825,0.214635610402,0.214727855124,0.214819842898,
	0.214911573636,0.215003047251,0.215094263662,0.215185222786,0.215275924546,
	0.215366368866,0.215456555673,0.215546484899,0.215636156475,0.215725570336,
	0.215814726422,0.215903624673,0.215992265034,0.216080647450,0.216168771872,
	0.216256638251,0.216344246544,0.216431596708,0.216518688704,0.216605522496,
	0.216692098051,0.216778415340,0.216864474334,0.216950275011,0.217035817347,
	0.217121101327,0.217206126933,0.217290894155,0.217375402983,0.217459653411,
	0.217543645437,0.217627379061,0.217710854286,0.217794071119,0.217877029569,
	0.217959729650,0.218042171377,0.218124354771,0.218206279852,0.218287946648,
	0.218369355187,0.218450505501,0.218531397625,0.218612031599,0.218692407465,
	0.218772525268,0.218852385057,0.218931986883,0.219011330803,0.219090416874,
	0.219169245159,0.219247815724,0.219326128638,0.219404183972,0.219481981803,
	0.219559522210,0.219636805275,0.219713831084,0.219790599728,0.219867111298,
	0.219943365892,0.220019363610,0.220095104554,0.220170588832,0.220245816555,
	0.220320787836,0.220395502794,0.220469961549,0.220544164226,0.220618110954,
	0.220691801864,0.220765237091,0.220838416776,0.220911341060,0.220984010089,
	0.221056424014,0.221128582988,0.221200487169,0.221272136716,0.221343531795,
	0.221414672573,0.221485559222,0.221556191917,0.221626570838,0.221696696167,
	0.221766568090,0.221836186798,0.221905552484,0.221974665345,0.222043525583,
	0.222112133402,0.222180489011,0.222248592621,0.222316444450,0.222384044715,
	0.222451393640,0.222518491453,0.222585338384,0.222651934667,0.222718280540,
	0.222784376245,0.222850222027,0.222915818136,0.222981164824,0.223046262348,
	0.223111110967,0.223175710947,0.223240062554,0.223304166060,0.223368021740,
	0.223431629872,0.223494990739,0.223558104627,0.223620971826,0.223683592629,
	0.223745967333,0.223808096238,0.223869979650,0.223931617876,0.223993011229,
	0.224054160022,0.224115064576,0.224175725213,0.224236142259,0.224296316043,
	0.224356246901,0.224415935168,0.224475381185,0.224534585296,0.224593547850,
	0.224652269198,0.224710749694,0.224768989697,0.224826989569,0.224884749676,
	0.224942270387,0.224999552074,0.225056595114,0.225113399886,0.225169966772,
	0.225226296161,0.225282388441,0.225338244007,0.225393863254,0.225449246583,
	0.225504394398,0.225559307106,0.225613985117,0.225668428845,0.225722638707,
	0.225776615123,0.225830358518,0.225883869318,0.225937147954,0.225990194858,
	0.226043010469,0.226095595226,0.226147949572,0.226200073954,0.226251968821,
	0.226303634627,0.226355071826,0.226406280879,0.226457262248,0.226508016397,
	0.226558543795,0.226608844914,0.226658920228,0.226708770214,0.226758395353,
	0.226807796128,0.226856973025,0.226905926535,0.226954657148,0.227003165361,
	0.227051451670,0.227099516577,0.227147360586,0.227194984202,0.227242387935,
	0.227289572297,0.227336537803,0.227383284969,0.227429814316,0.227476126367,
	0.227522221647,0.227568100683,0.227613764007,0.227659212151,0.227704445652,
	0.227749465046,0.227794270876,0.227838863683,0.227883244014,0.227927412417,
	0.227971369441,0.228015115640,0.228058651568,0.228101977783,0.228145094844,
	0.228188003313,0.228230703755,0.228273196736,0.228315482824,0.228357562589,
	0.228399436605,0.228441105447,0.228482569690,0.228523829914,0.228564886701,
	0.228605740632,0.228646392293,0.228686842271,0.228727091154,0.228767139533,
	0.228806988000,0.228846637149,0.228886087577,0.228925339881,0.228964394660,
	0.229003252515,0.229041914051,0.229080379870,0.229118650579,0.229156726786,
	0.229194609099,0.229232298130,0.229269794490,0.229307098793,0.229344211655,
	0.229381133692,0.229417865521,0.229454407762,0.229490761035,0.229526925962,
	0.229562903166,0.229598693272,0.229634296904,0.229669714689,0.229704947256,
	0.229739995232,0.229774859248,0.229809539935,0.229844037924,0.229878353849,
	0.229912488343,0.229946442042,0.229980215580,0.230013809595,0.230047224724,
	0.230080461605,0.230113520877,0.230146403180,0.230179109154,0.230211639440,
	0.230243994681,0.230276175518,0.230308182594,0.230340016554,0.230371678041,
	0.230403167700,0.230434486175,0.230465634114,0.230496612160,0.230527420962,
	0.230558061165,0.230588533416,0.230618838364,0.230648976655,0.230678948938,
	0.230708755860,0.230738398071,0.230767876218,0.230797190950,0.230826342916,
	0.230855332764,0.230884161144,0.230912828705,0.230941336095,0.230969683963,
	0.230997872959,0.231025903730,0.231053776926,0.231081493195,0.231109053185,
	0.231136457544,0.231163706921,0.231190801963,0.231217743318,0.231244531633,
	0.231271167554,0.231297651728,0.231323984801,0.231350167420,0.231376200228,
	0.231402083872,0.231427818995,0.231453406242,0.231478846256,0.231504139679,
	0.231529287154,0.231554289323,0.231579146827,0.231603860307,0.231628430401,
	0.231652857750,0.231677142991,0.231701286763,0.231725289702,0.231749152445,
	0.231772875627,0.231796459882,0.231819905844,0.231843214147,0.231866385421,
	0.231889420299,0.231912319410,0.231935083384,0.231957712849,0.231980208432,
	0.232002570760,0.232024800457,0.232046898148,0.232068864457,0.232090700005,
	0.232112405413,0.232133981301,0.232155428288,0.232176746992,0.232197938028,
	0.232219002013,0.232239939559,0.232260751280,0.232281437788,0.232301999692,
	0.232322437602,0.232342752125,0.232362943868,0.232383013436,0.232402961432,
	0.232422788459,0.232442495117,0.232462082007,0.232481549726,0.232500898872,
	0.232520130039,0.232539243822,0.232558240812,0.232577121601,0.232595886779,
	0.232614536932,0.232633072648,0.232651494511,0.232669803105,0.232687999012,
	0.232706082811,0.232724055081,0.232741916399,0.232759667341,0.232777308480,
	0.232794840389,0.232812263638,0.232829578795,0.232846786429,0.232863887104,
	0.232880881384,0.232897769832,0.232914553008,0.232931231469,0.232947805775,
	0.232964276479,0.232980644135,0.232996909295,0.233013072509,0.233029134324,
	0.233045095288,0.233060955945,0.233076716837,0.233092378506,0.233107941491,
	0.233123406329,0.233138773556,0.233154043706,0.233169217309,0.233184294897,
	0.233199276997,0.233214164135,0.233228956837,0.233243655624,0.233258261018,
	0.233272773536,0.233287193696,0.233301522013,0.233315758999,0.233329905166,
	0.233343961024,0.233357927079,0.233371803836,0.233385591800,0.233399291472,
	0.233412903351,0.233426427935,0.233439865719,0.233453217198,0.233466482863,
	0.233479663205,0.233492758710,0.233505769865,0.233518697154,0.233531541059,
	0.233544302060,0.233556980635,0.233569577259,0.233582092408,0.233594526554,
	0.233606880165,0.233619153712,0.233631347659,0.233643462471,0.233655498611,
	0.233667456538,0.233679336712,0.233691139587,0.233702865619,0.233714515260,
	0.233726088959,0.233737587167,0.233749010328,0.233760358887,0.233771633287,
	0.233782833968,0.233793961369,0.233805015925,0.233815998072,0.233826908241,
	0.233837746864,0.233848514369,0.233859211182,0.233869837728,0.233880394429,
	0.233890881707,0.233901299979,0.233911649663,0.233921931173,0.233932144921,
	0.233942291319,0.233952370776,0.233962383697,0.233972330489,0.233982211554,
	0.233992027292,0.234001778104,0.234011464385,0.234021086532,0.234030644937,
	0.234040139992,0.234049572085,0.234058941605,0.234068248937,0.234077494463,
	0.234086678567,0.234095801627,0.234104864021,0.234113866126,0.234122808314,
	0.234131690959,0.234140514430,0.234149279095,0.234157985322,0.234166633473,
	0.234175223913,0.234183757001,0.234192233096,0.234200652556,0.234209015736,
	0.234217322988,0.234225574665,0.234233771115,0.234241912686,0.234249999725,
	0.234258032574,0.234266011578,0.234273937075,0.234281809404,0.234289628902,
	0.234297395904,0.234305110742,0.234312773749,0.234320385254,0.234327945584,
	0.234335455066,0.234342914023,0.234350322778,0.234357681651,0.234364990961,
	0.234372251026,0.234379462160,0.234386624678,0.234393738891,0.234400805109,
	0.234407823640,0.234414794792,0.234421718869,0.234428596174,0.234435427009,
	0.234442211674,0.234448950466,0.234455643683,0.234462291619,0.234468894567,
	0.234475452819,0.234481966663,0.234488436389,0.234494862283,0.234501244630,
	0.234507583712,0.234513879812,0.234520133209,0.234526344182,0.234532513006,
	0.234538639958,0.234544725311,0.234550769337,0.234556772305,0.234562734485,
	0.234568656144,0.234574537547,0.234580378958,0.234586180640,0.234591942854,
	0.234597665860,0.234603349914,0.234608995273,0.234614602192,0.234620170925,
	0.234625701723,0.234631194836,0.234636650513,0.234642069001,0.234647450547,
	0.234652795394,0.234658103785,0.234663375962,0.234668612164,0.234673812631,
	0.234678977598,0.234684107303,0.234689201978,0.234694261857,0.234699287170,
	0.234704278149,0.234709235021,0.234714158013,0.234719047352,0.234723903261,
	0.234728725964,0.234733515682,0.234738272635,0.234742997042,0.234747689122,
	0.234752349089,0.234756977159,0.234761573545,0.234766138460,0.234770672114,
	0.234775174717,0.234779646477,0.234784087601,0.234788498295,0.234792878763,
	0.234797229209,0.234801549834,0.234805840838,0.234810102421,0.234814334782,
	0.234818538116,0.234822712619,0.234826858487,0.234830975911,0.234835065084,
	0.234839126196,0.234843159438,0.234847164996,0.234851143059,0.234855093811,
	0.234859017439,0.234862914124,0.234866784051,0.234870627399,0.234874444349,
	0.234878235080,0.234881999769,0.234885738593,0.234889451728,0.234893139348,
	0.234896801625,0.234900438733,0.234904050842,0.234907638122,0.234911200742,
	0.234914738870,0.234918252671,0.234921742313,0.234925207958,0.234928649771,
	0.234932067914,0.234935462549,0.234938833834,0.234942181931,0.234945506996,
	0.234948809187,0.234952088660,0.234955345570,0.234958580072,0.234961792318,
	0.234964982460,0.234968150650,0.234971297037,0.234974421771,0.234977524999,
	0.234980606870,0.234983667528,0.234986707120,0.234989725790,0.234992723680,
	0.234995700934,0.234998657693,0.235001594096,0.235004510285,0.235007406397,
	0.235010282570,0.235013138941,0.235015975646,0.235018792820,0.235021590596,
	0.235024369110,0.235027128491,0.235029868873,0.235032590385,0.235035293158,
	0.235037977320,0.235040643000,0.235043290323,0.235045919417,0.235048530408,
	0.235051123419,0.235053698575,0.235056255998,0.235058795810,0.235061318134,
	0.235063823089,0.235066310795,0.235068781371,0.235071234935,0.235073671605,
	0.235076091496,0.235078494725,0.235080881407,0.235083251656,0.235085605584,
	0.235087943305,0.235090264931,0.235092570573,0.235094860341,0.235097134345,
	0.235099392694,0.235101635495,0.235103862857,0.235106074885,0.235108271687,
	0.235110453367,0.235112620030,0.235114771779,0.235116908718,0.235119030949,
	0.235121138574,0.235123231694,0.235125310410,0.235127374820,0.235129425025,
	0.235131461122,0.235133483208,0.235135491382,0.235137485739,0.235139466376,
	0.235141433386,0.235143386864,0.235145326905,0.235147253601,0.235149167045,
	0.235151067328,0.235152954542,0.235154828777,0.235156690124,0.235158538671,
	0.235160374507,0.235162197721,0.235164008400,0.235165806631,0.235167592500,
	0.235169366093,0.235171127495,0.235172876790,0.235174614064,0.235176339398,
	0.235178052876,0.235179754580,0.235181444592,0.235183122993,0.235184789864,
	0.235186445284,0.235188089333,0.235189722090,0.235191343634,0.235192954041,
	0.235194553391,0.235196141758,0.235197719220,0.235199285852,0.235200841729,
	0.235202386927,0.235203921518,0.235205445578,0.235206959179,0.235208462393,
	0.235209955293,0.235211437951,0.235212910437,0.235214372823,0.235215825177,
	0.235217267571,0.235218700073,0.235220122752,0.235221535677,0.235222938914,
	0.235224332531,0.235225716596,0.235227091174,0.235228456332,0.235229812134,
	0.235231158646,0.235232495932,0.235233824057,0.235235143084,0.235236453077,
	0.235237754097,0.235239046208,0.235240329471,0.235241603949,0.235242869700,
	0.235244126788,0.235245375271,0.235246615209,0.235247846663,0.235249069690,
	0.235250284350,0.235251490700,0.235252688798,0.235253878702,0.235255060468,
	0.235256234153,0.235257399813,0.235258557505,0.235259707282,0.235260849201,
	0.235261983316,0.235263109680,0.235264228349,0.235265339375,0.235266442811,
	0.235267538711,0.235268627126,0.235269708108,0.235270781710,0.235271847982,
	0.235272906975,0.235273958741,0.235275003328,0.235276040787,0.235277071168,
	0.235278094519,0.235279110889,0.235280120327,0.235281122882,0.235282118599,
	0.235283107529,0.235284089716,0.235285065209,0.235286034053,0.235286996295,
	0.235287951981,0.235288901156,0.235289843865,0.235290780153,0.235291710065,
	0.235292633645,0.235293550937,0.235294461984,0.235295366831,0.235296265519,
	0.235297158092,0.235298044591,0.235298925060,0.235299799540,0.235300668073,
	0.235301530699,0.235302387460,0.235303238397,0.235304083549,0.235304922958,
	0.235305756662,0.235306584701,0.235307407115,0.235308223942,0.235309035222,
	0.235309840992,0.235310641291,0.235311436157,0.235312225628,0.235313009740,
	0.235313788532,0.235314562039,0.235315330299,0.235316093347,0.235316851221,
	0.235317603955,0.235318351585,0.235319094147,0.235319831676,0.235320564206,
	0.235321291773,0.235322014410,0.235322732152,0.235323445033,0.235324153085,
	0.235324856343,0.235325554841,0.235326248609,0.235326937683,0.235327622093,
	0.235328301872,0.235328977053,0.235329647666,0.235330313744,0.235330975318,
	0.235331632420,0.235332285079,0.235332933327,0.235333577194,0.235334216710,
	0.235334851906,0.235335482812,0.235336109457,0.235336731870,0.235337350080,
	0.235337964118,0.235338574011,0.235339179788,0.235339781478,0.235340379108,
	0.235340972708,0.235341562304,0.235342147924,0.235342729596,0.235343307347,
	0.235343881204,0.235344451194,0.235345017344,0.235345579679,0.235346138227,
	0.235346693014,0.235347244064,0.235347791405,0.235348335062,0.235348875060,
	0.235349411424,0.235349944180,0.235350473351,0.235350998964,0.235351521042,
	0.235352039610,0.235352554692,0.235353066312,0.235353574494,0.235354079262,
	0.235354580638,0.235355078647,0.235355573311,0.235356064653,0.235356552698,
	0.235357037466,0.235357518981,0.235357997264,0.235358472340,0.235358944228,
	0.235359412951,0.235359878532,0.235360340991,0.235360800350,0.235361256630,
	0.235361709853,0.235362160039,0.235362607210,0.235363051386,0.235363492587,
	0.235363930834,0.235364366148,0.235364798548,0.235365228055,0.235365654687,
	0.235366078466,0.235366499411,0.235366917540,0.235367332874,0.235367745432,
	0.235368155232,0.235368562294,0.235368966635,0.235369368276,0.235369767234,
	0.235370163528,0.235370557176,0.235370948197,0.235371336607,0.235371722426,
	0.235372105670,0.235372486358,0.235372864507
	}
};

double always_inline s07_stage5_negclip(double x) {
    double f = fabs(x);
    f = f * s07_stage5_neg_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = s07_stage5_neg_table.data[0];
    } else if (i >= s07_stage5_neg_table.size-1) {
        f = s07_stage5_neg_table.data[s07_stage5_neg_table.size-1];
    } else {
        f -= i;
        f = s07_stage5_neg_table.data[i]*(1-f) + s07_stage5_neg_table.data[i+1]*f;
    }
    return copysign(f, x);
}

