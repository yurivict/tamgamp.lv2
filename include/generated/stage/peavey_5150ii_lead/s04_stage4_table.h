
// s04_stage4_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  10.000000
 // --table_div  324.918045
 // --table_op  1.000000

struct tables04_stage4 { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tables04_stage4_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tables04_stage4&() const { return *(tables04_stage4*)this; }
};

static tables04_stage4_imp<2048> s04_stage4_table __rt_data = {
	0,-0.360468,204.7,2048, {
	0.000000000000,-0.000295883966,-0.000592993898,-0.000891326531,-0.001190878541,
	-0.001491646539,-0.001793627075,-0.002096816637,-0.002401211650,-0.002706808481,
	-0.003013603434,-0.003321592757,-0.003630772635,-0.003941139197,-0.004252688513,
	-0.004565416594,-0.004879319397,-0.005194392821,-0.005510632709,-0.005828034848,
	-0.006146594972,-0.006466308760,-0.006787171838,-0.007109179778,-0.007432328100,
	-0.007756612274,-0.008082027716,-0.008408569794,-0.008736233823,-0.009065015073,
	-0.009394908762,-0.009725910060,-0.010058014092,-0.010391215933,-0.010725510615,
	-0.011060893122,-0.011397358394,-0.011734901327,-0.012073516773,-0.012413199542,
	-0.012753944400,-0.013095746071,-0.013438599241,-0.013782498552,-0.014127438609,
	-0.014473413976,-0.014820419180,-0.015168448710,-0.015517497015,-0.015867558513,
	-0.016218627580,-0.016570698562,-0.016923765768,-0.017277823472,-0.017632865918,
	-0.017988887315,-0.018345881840,-0.018703843641,-0.019062766832,-0.019422645499,
	-0.019783473700,-0.020145245461,-0.020507954783,-0.020871595637,-0.021236161970,
	-0.021601647701,-0.021968046724,-0.022335352907,-0.022703560097,-0.023072662113,
	-0.023442652755,-0.023813525799,-0.024185274999,-0.024557894088,-0.024931376779,
	-0.025305716765,-0.025680907719,-0.026056943298,-0.026433817137,-0.026811522857,
	-0.027190054061,-0.027569404334,-0.027949567249,-0.028330536361,-0.028712305212,
	-0.029094867330,-0.029478216228,-0.029862345410,-0.030247248363,-0.030632918568,
	-0.031019349489,-0.031406534586,-0.031794467303,-0.032183141078,-0.032572549341,
	-0.032962685512,-0.033353543002,-0.033745115219,-0.034137395562,-0.034530377422,
	-0.034924054187,-0.035318419240,-0.035713465959,-0.036109187717,-0.036505577884,
	-0.036902629828,-0.037300336914,-0.037698692503,-0.038097689958,-0.038497322637,
	-0.038897583902,-0.039298467110,-0.039699965623,-0.040102072799,-0.040504782002,
	-0.040908086595,-0.041311979943,-0.041716455415,-0.042121506382,-0.042527126220,
	-0.042933308307,-0.043340046026,-0.043747332765,-0.044155161919,-0.044563526884,
	-0.044972421067,-0.045381837878,-0.045791770736,-0.046202213066,-0.046613158300,
	-0.047024599879,-0.047436531253,-0.047848945879,-0.048261837225,-0.048675198766,
	-0.049089023989,-0.049503306390,-0.049918039476,-0.050333216765,-0.050748831785,
	-0.051164878077,-0.051581349192,-0.051998238697,-0.052415540166,-0.052833247191,
	-0.053251353373,-0.053669852329,-0.054088737689,-0.054508003097,-0.054927642211,
	-0.055347648704,-0.055768016264,-0.056188738593,-0.056609809410,-0.057031222448,
	-0.057452971459,-0.057875050208,-0.058297452477,-0.058720172067,-0.059143202793,
	-0.059566538490,-0.059990173007,-0.060414100215,-0.060838313999,-0.061262808265,
	-0.061687576936,-0.062112613954,-0.062537913278,-0.062963468890,-0.063389274787,
	-0.063815324988,-0.064241613532,-0.064668134474,-0.065094881894,-0.065521849890,
	-0.065949032578,-0.066376424099,-0.066804018612,-0.067231810297,-0.067659793355,
	-0.068087962010,-0.068516310505,-0.068944833106,-0.069373524100,-0.069802377797,
	-0.070231388527,-0.070660550644,-0.071089858523,-0.071519306561,-0.071948889181,
	-0.072378600823,-0.072808435955,-0.073238389065,-0.073668454664,-0.074098627288,
	-0.074528901494,-0.074959271864,-0.075389733003,-0.075820279539,-0.076250906124,
	-0.076681607434,-0.077112378169,-0.077543213052,-0.077974106831,-0.078405054278,
	-0.078836050188,-0.079267089381,-0.079698166703,-0.080129277021,-0.080560415229,
	-0.080991576245,-0.081422755011,-0.081853946495,-0.082285145688,-0.082716347607,
	-0.083147547294,-0.083578739814,-0.084009920258,-0.084441083744,-0.084872225413,
	-0.085303340430,-0.085734423987,-0.086165471300,-0.086596477612,-0.087027438189,
	-0.087458348323,-0.087889203332,-0.088319998559,-0.088750729370,-0.089181391161,
	-0.089611979348,-0.090042489377,-0.090472916716,-0.090903256861,-0.091333505331,
	-0.091763657673,-0.092193709457,-0.092623656279,-0.093053493761,-0.093483217551,
	-0.093912823321,-0.094342306769,-0.094771663619,-0.095200889619,-0.095629980545,
	-0.096058932194,-0.096487740394,-0.096916400993,-0.097344909868,-0.097773262919,
	-0.098201456074,-0.098629485283,-0.099057346524,-0.099485035799,-0.099912549135,
	-0.100339882585,-0.100767032227,-0.101193994163,-0.101620764522,-0.102047339457,
	-0.102473715145,-0.102899887791,-0.103325853621,-0.103751608890,-0.104177149876,
	-0.104602472880,-0.105027574231,-0.105452450282,-0.105877097408,-0.106301512014,
	-0.106725690524,-0.107149629391,-0.107573325089,-0.107996774120,-0.108419973007,
	-0.108842918300,-0.109265606573,-0.109688034423,-0.110110198472,-0.110532095367,
	-0.110953721777,-0.111375074398,-0.111796149948,-0.112216945169,-0.112637456828,
	-0.113057681715,-0.113477616644,-0.113897258452,-0.114316604002,-0.114735650179,
	-0.115154393890,-0.115572832069,-0.115990961670,-0.116408779673,-0.116826283080,
	-0.117243468916,-0.117660334229,-0.118076876092,-0.118493091598,-0.118908977866,
	-0.119324532036,-0.119739751271,-0.120154632758,-0.120569173704,-0.120983371341,
	-0.121397222923,-0.121810725727,-0.122223877050,-0.122636674213,-0.123049114560,
	-0.123461195456,-0.123872914288,-0.124284268465,-0.124695255419,-0.125105872602,
	-0.125516117490,-0.125925987578,-0.126335480385,-0.126744593451,-0.127153324337,
	-0.127561670624,-0.127969629917,-0.128377199840,-0.128784378040,-0.129191162183,
	-0.129597549958,-0.130003539073,-0.130409127259,-0.130814312264,-0.131219091862,
	-0.131623463843,-0.132027426019,-0.132430976222,-0.132834112306,-0.133236832144,
	-0.133639133628,-0.134041014672,-0.134442473208,-0.134843507191,-0.135244114592,
	-0.135644293404,-0.136044041640,-0.136443357331,-0.136842238528,-0.137240683301,
	-0.137638689742,-0.138036255958,-0.138433380078,-0.138830060249,-0.139226294638,
	-0.139622081428,-0.140017418825,-0.140412305050,-0.140806738345,-0.141200716969,
	-0.141594239201,-0.141987303337,-0.142379907691,-0.142772050596,-0.143163730404,
	-0.143554945483,-0.143945694220,-0.144335975020,-0.144725786306,-0.145115126517,
	-0.145503994112,-0.145892387565,-0.146280305369,-0.146667746034,-0.147054708088,
	-0.147441190074,-0.147827190555,-0.148212708107,-0.148597741328,-0.148982288828,
	-0.149366349237,-0.149749921199,-0.150133003378,-0.150515594452,-0.150897693114,
	-0.151279298078,-0.151660408069,-0.152041021831,-0.152421138125,-0.152800755725,
	-0.153179873422,-0.153558490025,-0.153936604355,-0.154314215252,-0.154691321570,
	-0.155067922177,-0.155444015959,-0.155819601816,-0.156194678663,-0.156569245431,
	-0.156943301065,-0.157316844526,-0.157689874789,-0.158062390845,-0.158434391698,
	-0.158805876367,-0.159176843887,-0.159547293307,-0.159917223688,-0.160286634109,
	-0.160655523661,-0.161023891448,-0.161391736592,-0.161759058226,-0.162125855496,
	-0.162492127564,-0.162857873606,-0.163223092810,-0.163587784378,-0.163951947527,
	-0.164315581484,-0.164678685494,-0.165041258811,-0.165403300705,-0.165764810457,
	-0.166125787363,-0.166486230731,-0.166846139882,-0.167205514150,-0.167564352880,
	-0.167922655433,-0.168280421179,-0.168637649503,-0.168994339802,-0.169350491484,
	-0.169706103970,-0.170061176694,-0.170415709102,-0.170769700650,-0.171123150808,
	-0.171476059057,-0.171828424891,-0.172180247814,-0.172531527343,-0.172882263006,
	-0.173232454342,-0.173582100903,-0.173931202251,-0.174279757959,-0.174627767613,
	-0.174975230809,-0.175322147154,-0.175668516265,-0.176014337773,-0.176359611316,
	-0.176704336547,-0.177048513125,-0.177392140724,-0.177735219026,-0.178077747725,
	-0.178419726523,-0.178761155135,-0.179102033286,-0.179442360709,-0.179782137151,
	-0.180121362364,-0.180460036115,-0.180798158179,-0.181135728339,-0.181472746391,
	-0.181809212138,-0.182145125396,-0.182480485986,-0.182815293744,-0.183149548511,
	-0.183483250139,-0.183816398491,-0.184148993436,-0.184481034855,-0.184812522638,
	-0.185143456681,-0.185473836894,-0.185803663191,-0.186132935499,-0.186461653751,
	-0.186789817891,-0.187117427870,-0.187444483648,-0.187770985194,-0.188096932485,
	-0.188422325509,-0.188747164258,-0.189071448735,-0.189395178952,-0.189718354928,
	-0.190040976690,-0.190363044274,-0.190684557723,-0.191005517089,-0.191325922431,
	-0.191645773817,-0.191965071321,-0.192283815028,-0.192602005027,-0.192919641417,
	-0.193236724304,-0.193553253801,-0.193869230029,-0.194184653117,-0.194499523200,
	-0.194813840421,-0.195127604931,-0.195440816886,-0.195753476452,-0.196065583800,
	-0.196377139109,-0.196688142564,-0.196998594358,-0.197308494691,-0.197617843769,
	-0.197926641804,-0.198234889017,-0.198542585634,-0.198849731888,-0.199156328018,
	-0.199462374271,-0.199767870898,-0.200072818159,-0.200377216320,-0.200681065650,
	-0.200984366429,-0.201287118939,-0.201589323472,-0.201890980323,-0.202192089794,
	-0.202492652194,-0.202792667836,-0.203092137041,-0.203391060134,-0.203689437446,
	-0.203987269317,-0.204284556087,-0.204581298106,-0.204877495728,-0.205173149314,
	-0.205468259227,-0.205762825840,-0.206056849528,-0.206350330673,-0.206643269661,
	-0.206935666886,-0.207227522743,-0.207518837636,-0.207809611973,-0.208099846165,
	-0.208389540632,-0.208678695795,-0.208967312083,-0.209255389927,-0.209542929767,
	-0.209829932043,-0.210116397204,-0.210402325700,-0.210687717989,-0.210972574532,
	-0.211256895795,-0.211540682247,-0.211823934365,-0.212106652627,-0.212388837517,
	-0.212670489523,-0.212951609139,-0.213232196860,-0.213512253189,-0.213791778630,
	-0.214070773694,-0.214349238893,-0.214627174747,-0.214904581776,-0.215181460507,
	-0.215457811471,-0.215733635200,-0.216008932234,-0.216283703113,-0.216557948383,
	-0.216831668595,-0.217104864300,-0.217377536057,-0.217649684425,-0.217921309969,
	-0.218192413257,-0.218462994861,-0.218733055355,-0.219002595319,-0.219271615333,
	-0.219540115985,-0.219808097862,-0.220075561557,-0.220342507666,-0.220608936787,
	-0.220874849523,-0.221140246479,-0.221405128264,-0.221669495489,-0.221933348770,
	-0.222196688724,-0.222459515973,-0.222721831140,-0.222983634854,-0.223244927743,
	-0.223505710440,-0.223765983583,-0.224025747809,-0.224285003760,-0.224543752080,
	-0.224801993417,-0.225059728420,-0.225316957743,-0.225573682039,-0.225829901968,
	-0.226085618190,-0.226340831368,-0.226595542167,-0.226849751256,-0.227103459305,
	-0.227356666988,-0.227609374980,-0.227861583959,-0.228113294606,-0.228364507603,
	-0.228615223636,-0.228865443390,-0.229115167557,-0.229364396828,-0.229613131897,
	-0.229861373459,-0.230109122215,-0.230356378863,-0.230603144106,-0.230849418649,
	-0.231095203199,-0.231340498464,-0.231585305155,-0.231829623984,-0.232073455667,
	-0.232316800918,-0.232559660458,-0.232802035005,-0.233043925282,-0.233285332012,
	-0.233526255922,-0.233766697737,-0.234006658189,-0.234246138006,-0.234485137922,
	-0.234723658670,-0.234961700986,-0.235199265608,-0.235436353275,-0.235672964726,
	-0.235909100703,-0.236144761951,-0.236379949214,-0.236614663238,-0.236848904771,
	-0.237082674563,-0.237315973363,-0.237548801925,-0.237781161001,-0.238013051346,
	-0.238244473716,-0.238475428868,-0.238705917561,-0.238935940554,-0.239165498608,
	-0.239394592486,-0.239623222950,-0.239851390765,-0.240079096697,-0.240306341513,
	-0.240533125979,-0.240759450866,-0.240985316942,-0.241210724979,-0.241435675748,
	-0.241660170023,-0.241884208577,-0.242107792185,-0.242330921622,-0.242553597666,
	-0.242775821094,-0.242997592684,-0.243218913215,-0.243439783468,-0.243660204223,
	-0.243880176262,-0.244099700366,-0.244318777321,-0.244537407909,-0.244755592914,
	-0.244973333123,-0.245190629321,-0.245407482294,-0.245623892831,-0.245839861719,
	-0.246055389746,-0.246270477702,-0.246485126377,-0.246699336560,-0.246913109042,
	-0.247126444615,-0.247339344070,-0.247551808201,-0.247763837799,-0.247975433657,
	-0.248186596571,-0.248397327333,-0.248607626738,-0.248817495582,-0.249026934658,
	-0.249235944764,-0.249444526695,-0.249652681248,-0.249860409218,-0.250067711404,
	-0.250274588602,-0.250481041609,-0.250687071224,-0.250892678245,-0.251097863470,
	-0.251302627697,-0.251506971725,-0.251710896353,-0.251914402379,-0.252117490604,
	-0.252320161826,-0.252522416844,-0.252724256459,-0.252925681470,-0.253126692677,
	-0.253327290879,-0.253527476876,-0.253727251469,-0.253926615457,-0.254125569640,
	-0.254324114819,-0.254522251793,-0.254719981362,-0.254917304326,-0.255114221485,
	-0.255310733639,-0.255506841588,-0.255702546132,-0.255897848069,-0.256092748200,
	-0.256287247323,-0.256481346239,-0.256675045746,-0.256868346644,-0.257061249731,
	-0.257253755805,-0.257445865666,-0.257637580111,-0.257828899939,-0.258019825947,
	-0.258210358933,-0.258400499695,-0.258590249029,-0.258779607733,-0.258968576603,
	-0.259157156435,-0.259345348025,-0.259533152170,-0.259720569664,-0.259907601303,
	-0.260094247881,-0.260280510193,-0.260466389033,-0.260651885194,-0.260836999470,
	-0.261021732654,-0.261206085538,-0.261390058915,-0.261573653577,-0.261756870313,
	-0.261939709917,-0.262122173177,-0.262304260884,-0.262485973828,-0.262667312797,
	-0.262848278581,-0.263028871966,-0.263209093742,-0.263388944695,-0.263568425612,
	-0.263747537279,-0.263926280481,-0.264104656004,-0.264282664632,-0.264460307148,
	-0.264637584338,-0.264814496982,-0.264991045864,-0.265167231766,-0.265343055467,
	-0.265518517750,-0.265693619393,-0.265868361176,-0.266042743878,-0.266216768277,
	-0.266390435150,-0.266563745273,-0.266736699424,-0.266909298377,-0.267081542908,
	-0.267253433789,-0.267424971796,-0.267596157700,-0.267766992273,-0.267937476288,
	-0.268107610514,-0.268277395722,-0.268446832681,-0.268615922159,-0.268784664925,
	-0.268953061744,-0.269121113384,-0.269288820610,-0.269456184187,-0.269623204879,
	-0.269789883448,-0.269956220659,-0.270122217272,-0.270287874048,-0.270453191747,
	-0.270618171129,-0.270782812952,-0.270947117975,-0.271111086953,-0.271274720643,
	-0.271438019801,-0.271600985180,-0.271763617534,-0.271925917617,-0.272087886179,
	-0.272249523973,-0.272410831748,-0.272571810253,-0.272732460237,-0.272892782448,
	-0.273052777632,-0.273212446536,-0.273371789903,-0.273530808479,-0.273689503007,
	-0.273847874227,-0.274005922883,-0.274163649715,-0.274321055461,-0.274478140862,
	-0.274634906653,-0.274791353573,-0.274947482357,-0.275103293739,-0.275258788455,
	-0.275413967236,-0.275568830815,-0.275723379923,-0.275877615291,-0.276031537647,
	-0.276185147720,-0.276338446236,-0.276491433923,-0.276644111506,-0.276796479709,
	-0.276948539254,-0.277100290866,-0.277251735265,-0.277402873171,-0.277553705304,
	-0.277704232382,-0.277854455123,-0.278004374244,-0.278153990458,-0.278303304482,
	-0.278452317027,-0.278601028808,-0.278749440534,-0.278897552916,-0.279045366663,
	-0.279192882484,-0.279340101086,-0.279487023175,-0.279633649456,-0.279779980633,
	-0.279926017409,-0.280071760486,-0.280217210565,-0.280362368346,-0.280507234527,
	-0.280651809807,-0.280796094882,-0.280940090448,-0.281083797199,-0.281227215829,
	-0.281370347029,-0.281513191493,-0.281655749909,-0.281798022966,-0.281940011354,
	-0.282081715759,-0.282223136867,-0.282364275362,-0.282505131929,-0.282645707251,
	-0.282786002007,-0.282926016880,-0.283065752549,-0.283205209691,-0.283344388985,
	-0.283483291105,-0.283621916727,-0.283760266525,-0.283898341172,-0.284036141338,
	-0.284173667696,-0.284310920913,-0.284447901659,-0.284584610600,-0.284721048403,
	-0.284857215733,-0.284993113252,-0.285128741625,-0.285264101511,-0.285399193573,
	-0.285534018469,-0.285668576857,-0.285802869395,-0.285936896738,-0.286070659541,
	-0.286204158457,-0.286337394140,-0.286470367240,-0.286603078408,-0.286735528292,
	-0.286867717542,-0.286999646802,-0.287131316720,-0.287262727940,-0.287393881104,
	-0.287524776856,-0.287655415836,-0.287785798684,-0.287915926039,-0.288045798539,
	-0.288175416820,-0.288304781517,-0.288433893264,-0.288562752696,-0.288691360442,
	-0.288819717135,-0.288947823403,-0.289075679875,-0.289203287178,-0.289330645939,
	-0.289457756782,-0.289584620331,-0.289711237209,-0.289837608037,-0.289963733435,
	-0.290089614022,-0.290215250417,-0.290340643236,-0.290465793095,-0.290590700608,
	-0.290715366389,-0.290839791049,-0.290963975201,-0.291087919452,-0.291211624414,
	-0.291335090692,-0.291458318893,-0.291581309622,-0.291704063483,-0.291826581080,
	-0.291948863013,-0.292070909883,-0.292192722290,-0.292314300832,-0.292435646106,
	-0.292556758707,-0.292677639231,-0.292798288270,-0.292918706417,-0.293038894264,
	-0.293158852400,-0.293278581415,-0.293398081895,-0.293517354428,-0.293636399598,
	-0.293755217990,-0.293873810188,-0.293992176772,-0.294110318324,-0.294228235423,
	-0.294345928647,-0.294463398574,-0.294580645779,-0.294697670838,-0.294814474325,
	-0.294931056811,-0.295047418868,-0.295163561067,-0.295279483976,-0.295395188164,
	-0.295510674197,-0.295625942641,-0.295740994059,-0.295855829016,-0.295970448074,
	-0.296084851793,-0.296199040733,-0.296313015454,-0.296426776511,-0.296540324462,
	-0.296653659862,-0.296766783265,-0.296879695223,-0.296992396289,-0.297104887008,
	-0.297217167938,-0.297329239625,-0.297441102614,-0.297552757451,-0.297664204682,
	-0.297775444849,-0.297886478496,-0.297997306164,-0.298107928393,-0.298218345721,
	-0.298328558687,-0.298438567828,-0.298548373679,-0.298657976774,-0.298767377648,
	-0.298876576831,-0.298985574856,-0.299094372251,-0.299202969546,-0.299311367269,
	-0.299419565945,-0.299527566100,-0.299635368259,-0.299742972944,-0.299850380677,
	-0.299957591979,-0.300064607370,-0.300171427368,-0.300278052491,-0.300384483254,
	-0.300490720174,-0.300596763764,-0.300702614536,-0.300808273003,-0.300913739675,
	-0.301019015062,-0.301124099672,-0.301228994013,-0.301333698590,-0.301438213908,
	-0.301542540472,-0.301646678784,-0.301750629346,-0.301854392658,-0.301957969220,
	-0.302061359530,-0.302164564086,-0.302267583383,-0.302370417916,-0.302473068179,
	-0.302575534666,-0.302677817867,-0.302779918273,-0.302881836374,-0.302983572659,
	-0.303085127613,-0.303186501724,-0.303287695476,-0.303388709354,-0.303489543840,
	-0.303590199416,-0.303690676562,-0.303790975759,-0.303891097485,-0.303991042216,
	-0.304090810430,-0.304190402602,-0.304289819206,-0.304389060714,-0.304488127598,
	-0.304587020331,-0.304685739381,-0.304784285216,-0.304882658306,-0.304980859116,
	-0.305078888111,-0.305176745757,-0.305274432516,-0.305371948850,-0.305469295222,
	-0.305566472090,-0.305663479915,-0.305760319154,-0.305856990263,-0.305953493700,
	-0.306049829918,-0.306145999371,-0.306242002512,-0.306337839793,-0.306433511664,
	-0.306529018574,-0.306624360973,-0.306719539307,-0.306814554023,-0.306909405566,
	-0.307004094380,-0.307098620909,-0.307192985595,-0.307287188879,-0.307381231200,
	-0.307475112999,-0.307568834712,-0.307662396777,-0.307755799630,-0.307849043706,
	-0.307942129438,-0.308035057259,-0.308127827602,-0.308220440897,-0.308312897573,
	-0.308405198059,-0.308497342784,-0.308589332173,-0.308681166653,-0.308772846647,
	-0.308864372581,-0.308955744875,-0.309046963952,-0.309138030232,-0.309228944135,
	-0.309319706080,-0.309410316483,-0.309500775762,-0.309591084332,-0.309681242607,
	-0.309771251002,-0.309861109927,-0.309950819796,-0.310040381019,-0.310129794004,
	-0.310219059162,-0.310308176898,-0.310397147620,-0.310485971733,-0.310574649643,
	-0.310663181751,-0.310751568462,-0.310839810176,-0.310927907295,-0.311015860218,
	-0.311103669343,-0.311191335068,-0.311278857791,-0.311366237907,-0.311453475810,
	-0.311540571895,-0.311627526554,-0.311714340179,-0.311801013161,-0.311887545891,
	-0.311973938756,-0.312060192146,-0.312146306447,-0.312232282045,-0.312318119326,
	-0.312403818673,-0.312489380470,-0.312574805100,-0.312660092944,-0.312745244381,
	-0.312830259792,-0.312915139555,-0.312999884048,-0.313084493648,-0.313168968729,
	-0.313253309667,-0.313337516836,-0.313421590609,-0.313505531357,-0.313589339452,
	-0.313673015264,-0.313756559161,-0.313839971513,-0.313923252687,-0.314006403048,
	-0.314089422964,-0.314172312797,-0.314255072912,-0.314337703672,-0.314420205439,
	-0.314502578573,-0.314584823434,-0.314666940382,-0.314748929774,-0.314830791969,
	-0.314912527323,-0.314994136190,-0.315075618926,-0.315156975884,-0.315238207418,
	-0.315319313879,-0.315400295618,-0.315481152985,-0.315561886330,-0.315642496001,
	-0.315722982345,-0.315803345710,-0.315883586440,-0.315963704880,-0.316043701376,
	-0.316123576269,-0.316203329902,-0.316282962616,-0.316362474751,-0.316441866648,
	-0.316521138645,-0.316600291080,-0.316679324290,-0.316758238611,-0.316837034378,
	-0.316915711926,-0.316994271588,-0.317072713697,-0.317151038584,-0.317229246582,
	-0.317307338019,-0.317385313226,-0.317463172530,-0.317540916259,-0.317618544741,
	-0.317696058300,-0.317773457263,-0.317850741952,-0.317927912693,-0.318004969806,
	-0.318081913614,-0.318158744439,-0.318235462599,-0.318312068414,-0.318388562202,
	-0.318464944282,-0.318541214969,-0.318617374580,-0.318693423431,-0.318769361834,
	-0.318845190104,-0.318920908553,-0.318996517493,-0.319072017236,-0.319147408091,
	-0.319222690367,-0.319297864375,-0.319372930420,-0.319447888811,-0.319522739853,
	-0.319597483852,-0.319672121113,-0.319746651938,-0.319821076632,-0.319895395497,
	-0.319969608833,-0.320043716942,-0.320117720123,-0.320191618676,-0.320265412899,
	-0.320339103088,-0.320412689542,-0.320486172556,-0.320559552424,-0.320632829442,
	-0.320706003903,-0.320779076100,-0.320852046324,-0.320924914868,-0.320997682021,
	-0.321070348074,-0.321142913315,-0.321215378033,-0.321287742515,-0.321360007048,
	-0.321432171917,-0.321504237408,-0.321576203806,-0.321648071393,-0.321719840454,
	-0.321791511270,-0.321863084122,-0.321934559292,-0.322005937058,-0.322077217701,
	-0.322148401499,-0.322219488729,-0.322290479669,-0.322361374595,-0.322432173781,
	-0.322502877504,-0.322573486037,-0.322643999653,-0.322714418625,-0.322784743224,
	-0.322854973723,-0.322925110391,-0.322995153497,-0.323065103312,-0.323134960103,
	-0.323204724137,-0.323274395682,-0.323343975003,-0.323413462366,-0.323482858036,
	-0.323552162276,-0.323621375351,-0.323690497521,-0.323759529050,-0.323828470198,
	-0.323897321225,-0.323966082392,-0.324034753958,-0.324103336180,-0.324171829317,
	-0.324240233626,-0.324308549362,-0.324376776781,-0.324444916139,-0.324512967688,
	-0.324580931684,-0.324648808378,-0.324716598023,-0.324784300871,-0.324851917171,
	-0.324919447175,-0.324986891131,-0.325054249289,-0.325121521896,-0.325188709200,
	-0.325255811447,-0.325322828884,-0.325389761756,-0.325456610308,-0.325523374784,
	-0.325590055427,-0.325656652480,-0.325723166186,-0.325789596785,-0.325855944518,
	-0.325922209626,-0.325988392348,-0.326054492922,-0.326120511588,-0.326186448582,
	-0.326252304142,-0.326318078503,-0.326383771901,-0.326449384572,-0.326514916749,
	-0.326580368666,-0.326645740556,-0.326711032652,-0.326776245186,-0.326841378388,
	-0.326906432488,-0.326971407718,-0.327036304306,-0.327101122480,-0.327165862470,
	-0.327230524501,-0.327295108801,-0.327359615596,-0.327424045112,-0.327488397573,
	-0.327552673203,-0.327616872227,-0.327680994867,-0.327745041346,-0.327809011885,
	-0.327872906706,-0.327936726030,-0.328000470076,-0.328064139063,-0.328127733212,
	-0.328191252738,-0.328254697862,-0.328318068798,-0.328381365764,-0.328444588976,
	-0.328507738648,-0.328570814996,-0.328633818233,-0.328696748572,-0.328759606227,
	-0.328822391411,-0.328885104333,-0.328947745206,-0.329010314240,-0.329072811645,
	-0.329135237631,-0.329197592405,-0.329259876177,-0.329322089154,-0.329384231542,
	-0.329446303549,-0.329508305380,-0.329570237240,-0.329632099335,-0.329693891868,
	-0.329755615044,-0.329817269064,-0.329878854132,-0.329940370450,-0.330001818218,
	-0.330063197639,-0.330124508911,-0.330185752234,-0.330246927809,-0.330308035833,
	-0.330369076504,-0.330430050020,-0.330490956578,-0.330551796374,-0.330612569604,
	-0.330673276463,-0.330733917147,-0.330794491848,-0.330855000762,-0.330915444080,
	-0.330975821996,-0.331036134702,-0.331096382389,-0.331156565248,-0.331216683470,
	-0.331276737244,-0.331336726760,-0.331396652207,-0.331456513773,-0.331516311646,
	-0.331576046013,-0.331635717060,-0.331695324975,-0.331754869943,-0.331814352149,
	-0.331873771777,-0.331933129012,-0.331992424038,-0.332051657037,-0.332110828192,
	-0.332169937686,-0.332228985700,-0.332287972414,-0.332346898010,-0.332405762668,
	-0.332464566566,-0.332523309885,-0.332581992803,-0.332640615497,-0.332699178146,
	-0.332757680926,-0.332816124014,-0.332874507586,-0.332932831818,-0.332991096884,
	-0.333049302959,-0.333107450218,-0.333165538833,-0.333223568978,-0.333281540826,
	-0.333339454549,-0.333397310318,-0.333455108304,-0.333512848679,-0.333570531611,
	-0.333628157272,-0.333685725830,-0.333743237455,-0.333800692313,-0.333858090574,
	-0.333915432404,-0.333972717971,-0.334029947440,-0.334087120978,-0.334144238750,
	-0.334201300921,-0.334258307655,-0.334315259117,-0.334372155471,-0.334428996879,
	-0.334485783503,-0.334542515507,-0.334599193052,-0.334655816299,-0.334712385409,
	-0.334768900542,-0.334825361859,-0.334881769518,-0.334938123679,-0.334994424501,
	-0.335050672140,-0.335106866756,-0.335163008505,-0.335219097545,-0.335275134030,
	-0.335331118118,-0.335387049964,-0.335442929722,-0.335498757547,-0.335554533593,
	-0.335610258015,-0.335665930965,-0.335721552595,-0.335777123059,-0.335832642509,
	-0.335888111095,-0.335943528969,-0.335998896281,-0.336054213182,-0.336109479822,
	-0.336164696349,-0.336219862913,-0.336274979662,-0.336330046745,-0.336385064308,
	-0.336440032500,-0.336494951466,-0.336549821354,-0.336604642309,-0.336659414477,
	-0.336714138003,-0.336768813032,-0.336823439708,-0.336878018175,-0.336932548576,
	-0.336987031055,-0.337041465754,-0.337095852815,-0.337150192381,-0.337204484593,
	-0.337258729591,-0.337312927517,-0.337367078510,-0.337421182711,-0.337475240258,
	-0.337529251292,-0.337583215950,-0.337637134371,-0.337691006693,-0.337744833053,
	-0.337798613587,-0.337852348434,-0.337906037729,-0.337959681608,-0.338013280206,
	-0.338066833659,-0.338120342100,-0.338173805666,-0.338227224489,-0.338280598703,
	-0.338333928441,-0.338387213836,-0.338440455020,-0.338493652126,-0.338546805285,
	-0.338599914628,-0.338652980286,-0.338706002390,-0.338758981070,-0.338811916456,
	-0.338864808676,-0.338917657860,-0.338970464137,-0.339023227635,-0.339075948481,
	-0.339128626804,-0.339181262730,-0.339233856387,-0.339286407900,-0.339338917395,
	-0.339391385000,-0.339443810838,-0.339496195034,-0.339548537715,-0.339600839002,
	-0.339653099021,-0.339705317896,-0.339757495748,-0.339809632702,-0.339861728879,
	-0.339913784402,-0.339965799392,-0.340017773971,-0.340069708259,-0.340121602379,
	-0.340173456449,-0.340225270590,-0.340277044922,-0.340328779564,-0.340380474635,
	-0.340432130253,-0.340483746537,-0.340535323605,-0.340586861574,-0.340638360562,
	-0.340689820686,-0.340741242061,-0.340792624805,-0.340843969033,-0.340895274862,
	-0.340946542405,-0.340997771778,-0.341048963096,-0.341100116472,-0.341151232021,
	-0.341202309857,-0.341253350092,-0.341304352839,-0.341355318211,-0.341406246321,
	-0.341457137280,-0.341507991200,-0.341558808191,-0.341609588366,-0.341660331835,
	-0.341711038707,-0.341761709094,-0.341812343104,-0.341862940847,-0.341913502432,
	-0.341964027969,-0.342014517564,-0.342064971326,-0.342115389364,-0.342165771784,
	-0.342216118694,-0.342266430200,-0.342316706409,-0.342366947428,-0.342417153361,
	-0.342467324315,-0.342517460396,-0.342567561707,-0.342617628354,-0.342667660441,
	-0.342717658072,-0.342767621351,-0.342817550381,-0.342867445266,-0.342917306108,
	-0.342967133010,-0.343016926074,-0.343066685402,-0.343116411096,-0.343166103257,
	-0.343215761986,-0.343265387384,-0.343314979552,-0.343364538589,-0.343414064595,
	-0.343463557671,-0.343513017915,-0.343562445426,-0.343611840304,-0.343661202646,
	-0.343710532551,-0.343759830116,-0.343809095440,-0.343858328619,-0.343907529750,
	-0.343956698931,-0.344005836257,-0.344054941825,-0.344104015730,-0.344153058069,
	-0.344202068936,-0.344251048427,-0.344299996636,-0.344348913658,-0.344397799587,
	-0.344446654517,-0.344495478541,-0.344544271754,-0.344593034247,-0.344641766114,
	-0.344690467448,-0.344739138340,-0.344787778883,-0.344836389169,-0.344884969288,
	-0.344933519333,-0.344982039393,-0.345030529560,-0.345078989925,-0.345127420576,
	-0.345175821605,-0.345224193101,-0.345272535152,-0.345320847849,-0.345369131280,
	-0.345417385533,-0.345465610697,-0.345513806860,-0.345561974110,-0.345610112534,
	-0.345658222219,-0.345706303252,-0.345754355721,-0.345802379712,-0.345850375310,
	-0.345898342603,-0.345946281675,-0.345994192612,-0.346042075499,-0.346089930422,
	-0.346137757465,-0.346185556712,-0.346233328248,-0.346281072157,-0.346328788523,
	-0.346376477428,-0.346424138956,-0.346471773191,-0.346519380215,-0.346566960110,
	-0.346614512958,-0.346662038843,-0.346709537845,-0.346757010046,-0.346804455527,
	-0.346851874370,-0.346899266655,-0.346946632463,-0.346993971874,-0.347041284968,
	-0.347088571825,-0.347135832525,-0.347183067147,-0.347230275770,-0.347277458473,
	-0.347324615335,-0.347371746435,-0.347418851850,-0.347465931659,-0.347512985939,
	-0.347560014768,-0.347607018223,-0.347653996382,-0.347700949320,-0.347747877115,
	-0.347794779843,-0.347841657581,-0.347888510404,-0.347935338388,-0.347982141608,
	-0.348028920140,-0.348075674058,-0.348122403438,-0.348169108355,-0.348215788882,
	-0.348262445093,-0.348309077064,-0.348355684867,-0.348402268575,-0.348448828263,
	-0.348495364003,-0.348541875868,-0.348588363931,-0.348634828264,-0.348681268940,
	-0.348727686030,-0.348774079606,-0.348820449739,-0.348866796502,-0.348913119965,
	-0.348959420199,-0.349005697275,-0.349051951263,-0.349098182234,-0.349144390258,
	-0.349190575404,-0.349236737743,-0.349282877344,-0.349328994275,-0.349375088607,
	-0.349421160407,-0.349467209746,-0.349513236690,-0.349559241308,-0.349605223669,
	-0.349651183840,-0.349697121889,-0.349743037883,-0.349788931890,-0.349834803976,
	-0.349880654208,-0.349926482653,-0.349972289378,-0.350018074448,-0.350063837930,
	-0.350109579889,-0.350155300392,-0.350200999503,-0.350246677288,-0.350292333812,
	-0.350337969140,-0.350383583336,-0.350429176465,-0.350474748591,-0.350520299779,
	-0.350565830092,-0.350611339594,-0.350656828348,-0.350702296419,-0.350747743868,
	-0.350793170759,-0.350838577155,-0.350883963118,-0.350929328711,-0.350974673995,
	-0.351019999034,-0.351065303889,-0.351110588620,-0.351155853291,-0.351201097962,
	-0.351246322695,-0.351291527549,-0.351336712587,-0.351381877868,-0.351427023453,
	-0.351472149402,-0.351517255775,-0.351562342632,-0.351607410033,-0.351652458037,
	-0.351697486704,-0.351742496092,-0.351787486260,-0.351832457268,-0.351877409174,
	-0.351922342036,-0.351967255913,-0.352012150862,-0.352057026942,-0.352101884210,
	-0.352146722724,-0.352191542542,-0.352236343719,-0.352281126315,-0.352325890384,
	-0.352370635985,-0.352415363173,-0.352460072005,-0.352504762538,-0.352549434826,
	-0.352594088927,-0.352638724895,-0.352683342787,-0.352727942657,-0.352772524561,
	-0.352817088554,-0.352861634691,-0.352906163026,-0.352950673614,-0.352995166509,
	-0.353039641766,-0.353084099438,-0.353128539580,-0.353172962244,-0.353217367486,
	-0.353261755358,-0.353306125913,-0.353350479204,-0.353394815285,-0.353439134208,
	-0.353483436026,-0.353527720791,-0.353571988555,-0.353616239372,-0.353660473291,
	-0.353704690366,-0.353748890648,-0.353793074189,-0.353837241039,-0.353881391251,
	-0.353925524875,-0.353969641962,-0.354013742562,-0.354057826727,-0.354101894507,
	-0.354145945952,-0.354189981113,-0.354234000038,-0.354278002779,-0.354321989384,
	-0.354365959904,-0.354409914387,-0.354453852883,-0.354497775441,-0.354541682110,
	-0.354585572939,-0.354629447976,-0.354673307270,-0.354717150870,-0.354760978822,
	-0.354804791177,-0.354848587980,-0.354892369281,-0.354936135127,-0.354979885565,
	-0.355023620643,-0.355067340407,-0.355111044906,-0.355154734185,-0.355198408292,
	-0.355242067273,-0.355285711175,-0.355329340044,-0.355372953927,-0.355416552869,
	-0.355460136916,-0.355503706114,-0.355547260510,-0.355590800147,-0.355634325073,
	-0.355677835331,-0.355721330967,-0.355764812027,-0.355808278554,-0.355851730594,
	-0.355895168192,-0.355938591391,-0.355982000235,-0.356025394771,-0.356068775040,
	-0.356112141087,-0.356155492956,-0.356198830691,-0.356242154334,-0.356285463930,
	-0.356328759522,-0.356372041152,-0.356415308864,-0.356458562701,-0.356501802705,
	-0.356545028919,-0.356588241385,-0.356631440146,-0.356674625244,-0.356717796721,
	-0.356760954619,-0.356804098980,-0.356847229845,-0.356890347257,-0.356933451256,
	-0.356976541884,-0.357019619182,-0.357062683191,-0.357105733952,-0.357148771506,
	-0.357191795894,-0.357234807157,-0.357277805334,-0.357320790466,-0.357363762593,
	-0.357406721756,-0.357449667994,-0.357492601347,-0.357535521856,-0.357578429559,
	-0.357621324496,-0.357664206706,-0.357707076229,-0.357749933104,-0.357792777370,
	-0.357835609065,-0.357878428230,-0.357921234901,-0.357964029118,-0.358006810919,
	-0.358049580343,-0.358092337428,-0.358135082211,-0.358177814731,-0.358220535026,
	-0.358263243133,-0.358305939090,-0.358348622934,-0.358391294704,-0.358433954435,
	-0.358476602166,-0.358519237934,-0.358561861775,-0.358604473726,-0.358647073823,
	-0.358689662105,-0.358732238606,-0.358774803364,-0.358817356415,-0.358859897794,
	-0.358902427539,-0.358944945684,-0.358987452266,-0.359029947320,-0.359072430883,
	-0.359114902989,-0.359157363674,-0.359199812973,-0.359242250922,-0.359284677556,
	-0.359327092909,-0.359369497017,-0.359411889914,-0.359454271634,-0.359496642213,
	-0.359539001685,-0.359581350085,-0.359623687446,-0.359666013802,-0.359708329188,
	-0.359750633638,-0.359792927185,-0.359835209863,-0.359877481706,-0.359919742748,
	-0.359961993021,-0.360004232559,-0.360046461396,-0.360088679564,-0.360130887096,
	-0.360173084026,-0.360215270386,-0.360257446208,-0.360299611527,-0.360341766373,
	-0.360383910779,-0.360426044779,-0.360468168403
	}
};

double always_inline s04_stage4clip(double x) {
    double f = fabs(x);
    f = f * s04_stage4_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = s04_stage4_table.data[0];
    } else if (i >= s04_stage4_table.size-1) {
        f = s04_stage4_table.data[s04_stage4_table.size-1];
    } else {
        f -= i;
        f = s04_stage4_table.data[i]*(1-f) + s04_stage4_table.data[i+1]*f;
    }
    return copysign(f, x);
}

