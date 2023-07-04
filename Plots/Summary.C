void Summary()
{
//=========Macro generated from canvas: COMPACT_2jets_summary/COMPACT_2jets_summary
//=========  (Mon Feb 20 11:58:10 2023) by ROOT version6.10/06
   TCanvas *COMPACT_2jets_summary = new TCanvas("COMPACT_2jets_summary", "COMPACT_2jets_summary",0,0,900,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   COMPACT_2jets_summary->SetHighLightColor(2);
   COMPACT_2jets_summary->Range(0,0,1,1);
   COMPACT_2jets_summary->SetFillColor(0);
   COMPACT_2jets_summary->SetBorderMode(0);
   COMPACT_2jets_summary->SetBorderSize(2);
   COMPACT_2jets_summary->SetTickx(1);
   COMPACT_2jets_summary->SetTicky(1);
   COMPACT_2jets_summary->SetLeftMargin(0.16);
   COMPACT_2jets_summary->SetRightMargin(0.05);
   COMPACT_2jets_summary->SetTopMargin(0.05);
   COMPACT_2jets_summary->SetBottomMargin(0.16);
   COMPACT_2jets_summary->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.27);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.3206107,-1.278688,3.114504,2);
   pad1->SetFillColor(0);
   pad1->SetFillStyle(4000);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(0);
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetRightMargin(0.03333334);
   pad1->SetTopMargin(0);
   pad1->SetBottomMargin(0.39);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TH1D *h_dummy2__13 = new TH1D("h_dummy2__13","h_Tot_summary",3,0,3);
   h_dummy2__13->SetMinimum(0);
   h_dummy2__13->SetMaximum(2);
   h_dummy2__13->SetEntries(6);
   h_dummy2__13->SetDirectory(0);
   h_dummy2__13->SetStats(0);
   h_dummy2__13->SetLineWidth(2);
   h_dummy2__13->SetMarkerStyle(20);
   h_dummy2__13->SetMarkerSize(1.2);
   h_dummy2__13->GetXaxis()->SetBinLabel(1,"3\ell1j");
   h_dummy2__13->GetXaxis()->SetBinLabel(2,"3\ell2j");
   h_dummy2__13->GetXaxis()->SetBinLabel(3,"3\ell3j");
   h_dummy2__13->GetXaxis()->SetBit(TAxis::kLabelsDown);
   h_dummy2__13->GetXaxis()->SetLabelFont(43);
   h_dummy2__13->GetXaxis()->SetLabelOffset(0.045);
   h_dummy2__13->GetXaxis()->SetLabelSize(28);
   h_dummy2__13->GetXaxis()->SetTitleSize(28);
   h_dummy2__13->GetXaxis()->SetTickLength(0.06);
   h_dummy2__13->GetXaxis()->SetTitleOffset(4.3);
   h_dummy2__13->GetXaxis()->SetTitleFont(43);
   h_dummy2__13->GetYaxis()->SetTitle("Data / Pred.");
   h_dummy2__13->GetYaxis()->SetNdivisions(-204);
   h_dummy2__13->GetYaxis()->SetLabelFont(43);
   h_dummy2__13->GetYaxis()->SetLabelSize(28);
   h_dummy2__13->GetYaxis()->SetTitleSize(28);
   h_dummy2__13->GetYaxis()->SetTitleOffset(1.125);
   h_dummy2__13->GetYaxis()->SetTitleFont(43);
   h_dummy2__13->GetZaxis()->SetLabelFont(43);
   h_dummy2__13->GetZaxis()->SetLabelSize(21);
   h_dummy2__13->GetZaxis()->SetTitleSize(21);
   h_dummy2__13->GetZaxis()->SetTitleFont(43);
   h_dummy2__13->Draw("HIST");
   TLine *line = new TLine(0,1,3,1);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3013[3] = {
   0.5,
   1.5,
   2.5};
   Double_t g_ratio2_fy3013[3] = {
   1,
   1,
   1};
   Double_t g_ratio2_felx3013[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fely3013[3] = {
   0.1631581,
   0.1936883,
   0.2173762};
   Double_t g_ratio2_fehx3013[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fehy3013[3] = {
   0.1631581,
   0.1936883,
   0.2173762};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,g_ratio2_fx3013,g_ratio2_fy3013,g_ratio2_felx3013,g_ratio2_fehx3013,g_ratio2_fely3013,g_ratio2_fehy3013);
   grae->SetName("g_ratio2");
   grae->SetTitle("h_Tot_summary");
   grae->SetFillColor(1);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_ratio23013 = new TH1F("Graph_g_ratio23013","h_Tot_summary",100,0,3.3);
   Graph_g_ratio23013->SetMinimum(0.7391485);
   Graph_g_ratio23013->SetMaximum(1.260851);
   Graph_g_ratio23013->SetDirectory(0);
   Graph_g_ratio23013->SetStats(0);
   Graph_g_ratio23013->SetLineWidth(2);
   Graph_g_ratio23013->SetMarkerStyle(20);
   Graph_g_ratio23013->SetMarkerSize(1.2);
   Graph_g_ratio23013->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23013->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23013->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23013->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23013->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23013->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23013->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23013->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23013->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23013->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23013->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23013->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23013->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23013->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23013);
   
   grae->Draw("e2");
   
   Double_t Graph_from_h_ratio_fx3014[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_from_h_ratio_fy3014[3] = {
   0.9612336,
   0.9472437,
   0.9264025};
   Double_t Graph_from_h_ratio_felx3014[3] = {
   0,
   0,
   0};
   Double_t Graph_from_h_ratio_fely3014[3] = {
   0.01660427,
   0.01918292,
   0.02336291};
   Double_t Graph_from_h_ratio_fehx3014[3] = {
   0,
   0,
   0};
   Double_t Graph_from_h_ratio_fehy3014[3] = {
   0.01689359,
   0.01957539,
   0.02395966};
   grae = new TGraphAsymmErrors(3,Graph_from_h_ratio_fx3014,Graph_from_h_ratio_fy3014,Graph_from_h_ratio_felx3014,Graph_from_h_ratio_fehx3014,Graph_from_h_ratio_fely3014,Graph_from_h_ratio_fehy3014);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("Data");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3014 = new TH1F("Graph_Graph_from_h_ratio3014","Data",100,0.3,2.7);
   Graph_Graph_from_h_ratio3014->SetMinimum(0.8955308);
   Graph_Graph_from_h_ratio3014->SetMaximum(0.985636);
   Graph_Graph_from_h_ratio3014->SetDirectory(0);
   Graph_Graph_from_h_ratio3014->SetStats(0);
   Graph_Graph_from_h_ratio3014->SetLineWidth(2);
   Graph_Graph_from_h_ratio3014->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3014->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3014->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3014->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3014->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3014->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3014->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3014->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3014->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3014->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3014->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3014->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3014->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3014->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3014->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3014->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3014);
   
   grae->Draw("pe0");
   
   TH1D *h_dummy2_copy__14 = new TH1D("h_dummy2_copy__14","h_Tot_summary",3,0,3);
   h_dummy2_copy__14->SetMinimum(0);
   h_dummy2_copy__14->SetMaximum(2);
   h_dummy2_copy__14->SetEntries(6);
   h_dummy2_copy__14->SetDirectory(0);
   h_dummy2_copy__14->SetStats(0);
   h_dummy2_copy__14->SetLineWidth(2);
   h_dummy2_copy__14->SetMarkerStyle(20);
   h_dummy2_copy__14->SetMarkerSize(1.2);
   h_dummy2_copy__14->GetXaxis()->SetBinLabel(1,"3\ell1j");
   h_dummy2_copy__14->GetXaxis()->SetBinLabel(2,"3\ell2j");
   h_dummy2_copy__14->GetXaxis()->SetBinLabel(3,"3\ell3j");
   h_dummy2_copy__14->GetXaxis()->SetBit(TAxis::kLabelsDown);
   h_dummy2_copy__14->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__14->GetXaxis()->SetLabelOffset(0.045);
   h_dummy2_copy__14->GetXaxis()->SetLabelSize(28);
   h_dummy2_copy__14->GetXaxis()->SetTitleSize(28);
   h_dummy2_copy__14->GetXaxis()->SetTickLength(0.06);
   h_dummy2_copy__14->GetXaxis()->SetTitleOffset(4.3);
   h_dummy2_copy__14->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__14->GetYaxis()->SetTitle("Data / Pred.");
   h_dummy2_copy__14->GetYaxis()->SetNdivisions(-204);
   h_dummy2_copy__14->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__14->GetYaxis()->SetLabelSize(28);
   h_dummy2_copy__14->GetYaxis()->SetTitleSize(28);
   h_dummy2_copy__14->GetYaxis()->SetTitleOffset(1.125);
   h_dummy2_copy__14->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__14->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__14->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__14->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__14->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__14->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.15,0.9,"");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.1);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1->Modified();
   COMPACT_2jets_summary->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.21,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-0.3206107,-0.55282,3.114504,4.97538);
   pad0->SetFillColor(0);
   pad0->SetFillStyle(4000);
   pad0->SetBorderMode(0);
   pad0->SetBorderSize(0);
   pad0->SetLogy();
   pad0->SetTickx(1);
   pad0->SetTicky(1);
   pad0->SetRightMargin(0.03333334);
   pad0->SetTopMargin(0.05);
   pad0->SetFrameBorderMode(0);
   pad0->SetFrameBorderMode(0);
   
   TH1D *h_dummy__15 = new TH1D("h_dummy__15","h_Tot_summary",3,0,3);
   h_dummy__15->SetMinimum(1);
   h_dummy__15->SetMaximum(50000);
   h_dummy__15->SetEntries(6);
   h_dummy__15->SetDirectory(0);
   h_dummy__15->SetStats(0);
   h_dummy__15->SetLineWidth(2);
   h_dummy__15->SetMarkerStyle(20);
   h_dummy__15->SetMarkerSize(1.2);
   h_dummy__15->GetXaxis()->SetBinLabel(1,"3\ell1j");
   h_dummy__15->GetXaxis()->SetBinLabel(2,"3\ell2j");
   h_dummy__15->GetXaxis()->SetBinLabel(3,"3\ell3j");
   h_dummy__15->GetXaxis()->SetBit(TAxis::kLabelsDown);
   h_dummy__15->GetXaxis()->SetLabelFont(43);
   h_dummy__15->GetXaxis()->SetLabelSize(0);
   h_dummy__15->GetXaxis()->SetTitleSize(28);
   h_dummy__15->GetXaxis()->SetTickLength(0.02);
   h_dummy__15->GetXaxis()->SetTitleOffset(2);
   h_dummy__15->GetXaxis()->SetTitleFont(43);
   h_dummy__15->GetYaxis()->SetTitle("Events");
   h_dummy__15->GetYaxis()->SetLabelFont(43);
   h_dummy__15->GetYaxis()->SetLabelSize(28);
   h_dummy__15->GetYaxis()->SetTitleSize(28);
   h_dummy__15->GetYaxis()->SetTickLength(0.02);
   h_dummy__15->GetYaxis()->SetTitleOffset(1.125);
   h_dummy__15->GetYaxis()->SetTitleFont(43);
   h_dummy__15->GetZaxis()->SetLabelFont(43);
   h_dummy__15->GetZaxis()->SetLabelSize(21);
   h_dummy__15->GetZaxis()->SetTitleSize(21);
   h_dummy__15->GetZaxis()->SetTitleFont(43);
   h_dummy__15->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   
   TH1F *h_stack_stack_4 = new TH1F("h_stack_stack_4","h_stack",3,0,3);
   h_stack_stack_4->SetMinimum(1.387384);
   h_stack_stack_4->SetMaximum(5579.249);
   h_stack_stack_4->SetDirectory(0);
   h_stack_stack_4->SetStats(0);
   h_stack_stack_4->SetLineWidth(2);
   h_stack_stack_4->SetMarkerStyle(20);
   h_stack_stack_4->SetMarkerSize(1.2);
   h_stack_stack_4->GetXaxis()->SetLabelFont(43);
   h_stack_stack_4->GetXaxis()->SetLabelSize(21);
   h_stack_stack_4->GetXaxis()->SetTitleSize(21);
   h_stack_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_4->GetXaxis()->SetTitleFont(43);
   h_stack_stack_4->GetYaxis()->SetLabelFont(43);
   h_stack_stack_4->GetYaxis()->SetLabelSize(21);
   h_stack_stack_4->GetYaxis()->SetTitleSize(21);
   h_stack_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_4->GetYaxis()->SetTitleFont(43);
   h_stack_stack_4->GetZaxis()->SetLabelFont(43);
   h_stack_stack_4->GetZaxis()->SetLabelSize(21);
   h_stack_stack_4->GetZaxis()->SetTitleSize(21);
   h_stack_stack_4->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_4);
   
   
   TH1D *tWZ_stack_1 = new TH1D("tWZ_stack_1","#it{WtZ}",3,0,3);
   tWZ_stack_1->SetBinContent(1,4.144891);
   tWZ_stack_1->SetBinContent(2,11.18755);
   tWZ_stack_1->SetBinContent(3,19.60152);
   tWZ_stack_1->SetBinError(1,0.2894787);
   tWZ_stack_1->SetBinError(2,0.4696801);
   tWZ_stack_1->SetBinError(3,0.705448);
   tWZ_stack_1->SetEntries(3);
   tWZ_stack_1->SetDirectory(0);
   tWZ_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#640169");
   tWZ_stack_1->SetFillColor(ci);
   tWZ_stack_1->SetMarkerStyle(20);
   tWZ_stack_1->SetMarkerSize(1.2);
   tWZ_stack_1->GetXaxis()->SetLabelFont(43);
   tWZ_stack_1->GetXaxis()->SetLabelSize(21);
   tWZ_stack_1->GetXaxis()->SetTitleSize(21);
   tWZ_stack_1->GetXaxis()->SetTitleOffset(1.4);
   tWZ_stack_1->GetXaxis()->SetTitleFont(43);
   tWZ_stack_1->GetYaxis()->SetLabelFont(43);
   tWZ_stack_1->GetYaxis()->SetLabelSize(21);
   tWZ_stack_1->GetYaxis()->SetTitleSize(21);
   tWZ_stack_1->GetYaxis()->SetTitleOffset(1.4);
   tWZ_stack_1->GetYaxis()->SetTitleFont(43);
   tWZ_stack_1->GetZaxis()->SetLabelFont(43);
   tWZ_stack_1->GetZaxis()->SetLabelSize(21);
   tWZ_stack_1->GetZaxis()->SetTitleSize(21);
   tWZ_stack_1->GetZaxis()->SetTitleFont(43);
   h_stack->Add(tWZ_stack_1,"");
   
   TH1D *ttZ_stack_2 = new TH1D("ttZ_stack_2","#it{t#bar{t}Z}",3,0,3);
   ttZ_stack_2->SetBinContent(1,7.247005);
   ttZ_stack_2->SetBinContent(2,21.39066);
   ttZ_stack_2->SetBinContent(3,78.01093);
   ttZ_stack_2->SetBinError(1,0.1928757);
   ttZ_stack_2->SetBinError(2,0.3317525);
   ttZ_stack_2->SetBinError(3,0.7335777);
   ttZ_stack_2->SetEntries(3);
   ttZ_stack_2->SetDirectory(0);
   ttZ_stack_2->SetStats(0);

   ci = TColor::GetColor("#a90f23");
   ttZ_stack_2->SetFillColor(ci);
   ttZ_stack_2->SetMarkerStyle(20);
   ttZ_stack_2->SetMarkerSize(1.2);
   ttZ_stack_2->GetXaxis()->SetLabelFont(43);
   ttZ_stack_2->GetXaxis()->SetLabelSize(21);
   ttZ_stack_2->GetXaxis()->SetTitleSize(21);
   ttZ_stack_2->GetXaxis()->SetTitleOffset(1.4);
   ttZ_stack_2->GetXaxis()->SetTitleFont(43);
   ttZ_stack_2->GetYaxis()->SetLabelFont(43);
   ttZ_stack_2->GetYaxis()->SetLabelSize(21);
   ttZ_stack_2->GetYaxis()->SetTitleSize(21);
   ttZ_stack_2->GetYaxis()->SetTitleOffset(1.4);
   ttZ_stack_2->GetYaxis()->SetTitleFont(43);
   ttZ_stack_2->GetZaxis()->SetLabelFont(43);
   ttZ_stack_2->GetZaxis()->SetLabelSize(21);
   ttZ_stack_2->GetZaxis()->SetTitleSize(21);
   ttZ_stack_2->GetZaxis()->SetTitleFont(43);
   h_stack->Add(ttZ_stack_2,"");
   
   TH1D *Zgamma_stack_3 = new TH1D("Zgamma_stack_3","#gamma conv.",3,0,3);
   Zgamma_stack_3->SetBinContent(1,41.81696);
   Zgamma_stack_3->SetBinContent(2,32.21402);
   Zgamma_stack_3->SetBinContent(3,9.650517);
   Zgamma_stack_3->SetBinError(1,8.384798);
   Zgamma_stack_3->SetBinError(2,6.914315);
   Zgamma_stack_3->SetBinError(3,4.186342);
   Zgamma_stack_3->SetEntries(3);
   Zgamma_stack_3->SetDirectory(0);
   Zgamma_stack_3->SetStats(0);

   ci = TColor::GetColor("#24a003");
   Zgamma_stack_3->SetFillColor(ci);
   Zgamma_stack_3->SetMarkerStyle(20);
   Zgamma_stack_3->SetMarkerSize(1.2);
   Zgamma_stack_3->GetXaxis()->SetLabelFont(43);
   Zgamma_stack_3->GetXaxis()->SetLabelSize(21);
   Zgamma_stack_3->GetXaxis()->SetTitleSize(21);
   Zgamma_stack_3->GetXaxis()->SetTitleOffset(1.4);
   Zgamma_stack_3->GetXaxis()->SetTitleFont(43);
   Zgamma_stack_3->GetYaxis()->SetLabelFont(43);
   Zgamma_stack_3->GetYaxis()->SetLabelSize(21);
   Zgamma_stack_3->GetYaxis()->SetTitleSize(21);
   Zgamma_stack_3->GetYaxis()->SetTitleOffset(1.4);
   Zgamma_stack_3->GetYaxis()->SetTitleFont(43);
   Zgamma_stack_3->GetZaxis()->SetLabelFont(43);
   Zgamma_stack_3->GetZaxis()->SetLabelSize(21);
   Zgamma_stack_3->GetZaxis()->SetTitleSize(21);
   Zgamma_stack_3->GetZaxis()->SetTitleFont(43);
   h_stack->Add(Zgamma_stack_3,"");
   
   TH1D *Zjets_stack_4 = new TH1D("Zjets_stack_4","Non-prompt",3,0,3);
   Zjets_stack_4->SetBinContent(1,160.6407);
   Zjets_stack_4->SetBinContent(2,92.91565);
   Zjets_stack_4->SetBinContent(3,71.27783);
   Zjets_stack_4->SetBinError(1,27.34328);
   Zjets_stack_4->SetBinError(2,8.802445);
   Zjets_stack_4->SetBinError(3,11.81308);
   Zjets_stack_4->SetEntries(3);
   Zjets_stack_4->SetDirectory(0);
   Zjets_stack_4->SetStats(0);

   ci = TColor::GetColor("#57a1f6");
   Zjets_stack_4->SetFillColor(ci);
   Zjets_stack_4->SetMarkerStyle(20);
   Zjets_stack_4->SetMarkerSize(1.2);
   Zjets_stack_4->GetXaxis()->SetLabelFont(43);
   Zjets_stack_4->GetXaxis()->SetLabelSize(21);
   Zjets_stack_4->GetXaxis()->SetTitleSize(21);
   Zjets_stack_4->GetXaxis()->SetTitleOffset(1.4);
   Zjets_stack_4->GetXaxis()->SetTitleFont(43);
   Zjets_stack_4->GetYaxis()->SetLabelFont(43);
   Zjets_stack_4->GetYaxis()->SetLabelSize(21);
   Zjets_stack_4->GetYaxis()->SetTitleSize(21);
   Zjets_stack_4->GetYaxis()->SetTitleOffset(1.4);
   Zjets_stack_4->GetYaxis()->SetTitleFont(43);
   Zjets_stack_4->GetZaxis()->SetLabelFont(43);
   Zjets_stack_4->GetZaxis()->SetLabelSize(21);
   Zjets_stack_4->GetZaxis()->SetTitleSize(21);
   Zjets_stack_4->GetZaxis()->SetTitleFont(43);
   h_stack->Add(Zjets_stack_4,"");
   
   TH1D *ZZ_stack_5 = new TH1D("ZZ_stack_5","#it{ZZ}",3,0,3);
   ZZ_stack_5->SetBinContent(1,316.931);
   ZZ_stack_5->SetBinContent(2,165.6902);
   ZZ_stack_5->SetBinContent(3,90.39768);
   ZZ_stack_5->SetBinError(1,2.258481);
   ZZ_stack_5->SetBinError(2,1.050911);
   ZZ_stack_5->SetBinError(3,0.5784452);
   ZZ_stack_5->SetEntries(6);
   ZZ_stack_5->SetDirectory(0);
   ZZ_stack_5->SetStats(0);

   ci = TColor::GetColor("#c48bff");
   ZZ_stack_5->SetFillColor(ci);
   ZZ_stack_5->SetMarkerStyle(20);
   ZZ_stack_5->SetMarkerSize(1.2);
   ZZ_stack_5->GetXaxis()->SetLabelFont(43);
   ZZ_stack_5->GetXaxis()->SetLabelSize(21);
   ZZ_stack_5->GetXaxis()->SetTitleSize(21);
   ZZ_stack_5->GetXaxis()->SetTitleOffset(1.4);
   ZZ_stack_5->GetXaxis()->SetTitleFont(43);
   ZZ_stack_5->GetYaxis()->SetLabelFont(43);
   ZZ_stack_5->GetYaxis()->SetLabelSize(21);
   ZZ_stack_5->GetYaxis()->SetTitleSize(21);
   ZZ_stack_5->GetYaxis()->SetTitleOffset(1.4);
   ZZ_stack_5->GetYaxis()->SetTitleFont(43);
   ZZ_stack_5->GetZaxis()->SetLabelFont(43);
   ZZ_stack_5->GetZaxis()->SetLabelSize(21);
   ZZ_stack_5->GetZaxis()->SetTitleSize(21);
   ZZ_stack_5->GetZaxis()->SetTitleFont(43);
   h_stack->Add(ZZ_stack_5,"");
   
   TH1D *WZ_stack_6 = new TH1D("WZ_stack_6","#it{WZ}",3,0,3);
   WZ_stack_6->SetBinContent(1,2721.733);
   WZ_stack_6->SetBinContent(2,2021.124);
   WZ_stack_6->SetBinContent(3,1258.097);
   WZ_stack_6->SetBinError(1,10.89738);
   WZ_stack_6->SetBinError(2,5.168082);
   WZ_stack_6->SetBinError(3,2.885544);
   WZ_stack_6->SetEntries(6);
   WZ_stack_6->SetDirectory(0);
   WZ_stack_6->SetStats(0);

   ci = TColor::GetColor("#fe9ccf");
   WZ_stack_6->SetFillColor(ci);
   WZ_stack_6->SetMarkerStyle(20);
   WZ_stack_6->SetMarkerSize(1.2);
   WZ_stack_6->GetXaxis()->SetLabelFont(43);
   WZ_stack_6->GetXaxis()->SetLabelSize(21);
   WZ_stack_6->GetXaxis()->SetTitleSize(21);
   WZ_stack_6->GetXaxis()->SetTitleOffset(1.4);
   WZ_stack_6->GetXaxis()->SetTitleFont(43);
   WZ_stack_6->GetYaxis()->SetLabelFont(43);
   WZ_stack_6->GetYaxis()->SetLabelSize(21);
   WZ_stack_6->GetYaxis()->SetTitleSize(21);
   WZ_stack_6->GetYaxis()->SetTitleOffset(1.4);
   WZ_stack_6->GetYaxis()->SetTitleFont(43);
   WZ_stack_6->GetZaxis()->SetLabelFont(43);
   WZ_stack_6->GetZaxis()->SetLabelSize(21);
   WZ_stack_6->GetZaxis()->SetTitleSize(21);
   WZ_stack_6->GetZaxis()->SetTitleFont(43);
   h_stack->Add(WZ_stack_6,"");
   
   TH1D *VH_other_stack_7 = new TH1D("VH_other_stack_7","Other",3,0,3);
   VH_other_stack_7->SetBinContent(1,196.4018);
   VH_other_stack_7->SetBinContent(2,178.4017);
   VH_other_stack_7->SetBinContent(3,120.2305);
   VH_other_stack_7->SetBinError(1,6.055541);
   VH_other_stack_7->SetBinError(2,5.673051);
   VH_other_stack_7->SetBinError(3,4.546399);
   VH_other_stack_7->SetEntries(9);
   VH_other_stack_7->SetDirectory(0);
   VH_other_stack_7->SetStats(0);

   ci = TColor::GetColor("#999999");
   VH_other_stack_7->SetFillColor(ci);
   VH_other_stack_7->SetMarkerStyle(20);
   VH_other_stack_7->SetMarkerSize(1.2);
   VH_other_stack_7->GetXaxis()->SetLabelFont(43);
   VH_other_stack_7->GetXaxis()->SetLabelSize(21);
   VH_other_stack_7->GetXaxis()->SetTitleSize(21);
   VH_other_stack_7->GetXaxis()->SetTitleOffset(1.4);
   VH_other_stack_7->GetXaxis()->SetTitleFont(43);
   VH_other_stack_7->GetYaxis()->SetLabelFont(43);
   VH_other_stack_7->GetYaxis()->SetLabelSize(21);
   VH_other_stack_7->GetYaxis()->SetTitleSize(21);
   VH_other_stack_7->GetYaxis()->SetTitleOffset(1.4);
   VH_other_stack_7->GetYaxis()->SetTitleFont(43);
   VH_other_stack_7->GetZaxis()->SetLabelFont(43);
   VH_other_stack_7->GetZaxis()->SetLabelSize(21);
   VH_other_stack_7->GetZaxis()->SetTitleSize(21);
   VH_other_stack_7->GetZaxis()->SetTitleFont(43);
   h_stack->Add(VH_other_stack_7,"");
   
   TH1D *WVZ_stack_8 = new TH1D("WVZ_stack_8","#it{WVV}",3,0,3);
   WVZ_stack_8->SetBinContent(1,37.23052);
   WVZ_stack_8->SetBinContent(2,50.85924);
   WVZ_stack_8->SetBinContent(3,49.62115);
   WVZ_stack_8->SetBinError(1,2.348226);
   WVZ_stack_8->SetBinError(2,2.134217);
   WVZ_stack_8->SetBinError(3,1.123414);
   WVZ_stack_8->SetEntries(6);
   WVZ_stack_8->SetDirectory(0);
   WVZ_stack_8->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   WVZ_stack_8->SetFillColor(ci);
   WVZ_stack_8->SetMarkerStyle(20);
   WVZ_stack_8->SetMarkerSize(1.2);
   WVZ_stack_8->GetXaxis()->SetLabelFont(43);
   WVZ_stack_8->GetXaxis()->SetLabelSize(21);
   WVZ_stack_8->GetXaxis()->SetTitleSize(21);
   WVZ_stack_8->GetXaxis()->SetTitleOffset(1.4);
   WVZ_stack_8->GetXaxis()->SetTitleFont(43);
   WVZ_stack_8->GetYaxis()->SetLabelFont(43);
   WVZ_stack_8->GetYaxis()->SetLabelSize(21);
   WVZ_stack_8->GetYaxis()->SetTitleSize(21);
   WVZ_stack_8->GetYaxis()->SetTitleOffset(1.4);
   WVZ_stack_8->GetYaxis()->SetTitleFont(43);
   WVZ_stack_8->GetZaxis()->SetLabelFont(43);
   WVZ_stack_8->GetZaxis()->SetLabelSize(21);
   WVZ_stack_8->GetZaxis()->SetTitleSize(21);
   WVZ_stack_8->GetZaxis()->SetTitleFont(43);
   h_stack->Add(WVZ_stack_8,"");
   h_stack->Draw("hist same");
   
   Double_t Graph_from_h_Tot_summary_fx3015[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_from_h_Tot_summary_fy3015[3] = {
   3486.145,
   2573.783,
   1696.887};
   Double_t Graph_from_h_Tot_summary_felx3015[3] = {
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_h_Tot_summary_fely3015[3] = {
   568.7929,
   498.5117,
   368.8629};
   Double_t Graph_from_h_Tot_summary_fehx3015[3] = {
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_h_Tot_summary_fehy3015[3] = {
   568.7929,
   498.5117,
   368.8629};
   grae = new TGraphAsymmErrors(3,Graph_from_h_Tot_summary_fx3015,Graph_from_h_Tot_summary_fy3015,Graph_from_h_Tot_summary_felx3015,Graph_from_h_Tot_summary_fehx3015,Graph_from_h_Tot_summary_fely3015,Graph_from_h_Tot_summary_fehy3015);
   grae->SetName("Graph_from_h_Tot_summary");
   grae->SetTitle("h_Tot_summary");
   grae->SetFillColor(1);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_Graph_from_h_Tot_summary3015 = new TH1F("Graph_Graph_from_h_Tot_summary3015","h_Tot_summary",100,0,3.3);
   Graph_Graph_from_h_Tot_summary3015->SetMinimum(1055.332);
   Graph_Graph_from_h_Tot_summary3015->SetMaximum(4327.63);
   Graph_Graph_from_h_Tot_summary3015->SetDirectory(0);
   Graph_Graph_from_h_Tot_summary3015->SetStats(0);
   Graph_Graph_from_h_Tot_summary3015->SetLineWidth(2);
   Graph_Graph_from_h_Tot_summary3015->SetMarkerStyle(20);
   Graph_Graph_from_h_Tot_summary3015->SetMarkerSize(1.2);
   Graph_Graph_from_h_Tot_summary3015->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_Tot_summary3015->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_Tot_summary3015->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_Tot_summary3015->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_Tot_summary3015->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_Tot_summary3015->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_Tot_summary3015->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_Tot_summary3015->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_Tot_summary3015->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_Tot_summary3015->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_Tot_summary3015->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_Tot_summary3015->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_Tot_summary3015->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_Tot_summary3015->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_Tot_summary3015);
   
   grae->Draw("e2");
   
   Double_t Graph_from_data_fx3016[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_from_data_fy3016[3] = {
   3351,
   2438,
   1572};
   Double_t Graph_from_data_felx3016[3] = {
   0,
   0,
   0};
   Double_t Graph_from_data_fely3016[3] = {
   57.88488,
   49.37268,
   39.64421};
   Double_t Graph_from_data_fehx3016[3] = {
   0,
   0,
   0};
   Double_t Graph_from_data_fehy3016[3] = {
   58.89352,
   50.38281,
   40.65683};
   grae = new TGraphAsymmErrors(3,Graph_from_data_fx3016,Graph_from_data_fy3016,Graph_from_data_felx3016,Graph_from_data_fehx3016,Graph_from_data_fely3016,Graph_from_data_fehy3016);
   grae->SetName("Graph_from_data");
   grae->SetTitle("Data");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_data3016 = new TH1F("Graph_Graph_from_data3016","Data",100,0.3,2.7);
   Graph_Graph_from_data3016->SetMinimum(1344.602);
   Graph_Graph_from_data3016->SetMaximum(3597.647);
   Graph_Graph_from_data3016->SetDirectory(0);
   Graph_Graph_from_data3016->SetStats(0);
   Graph_Graph_from_data3016->SetLineWidth(2);
   Graph_Graph_from_data3016->SetMarkerStyle(20);
   Graph_Graph_from_data3016->SetMarkerSize(1.2);
   Graph_Graph_from_data3016->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_data3016->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_data3016->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_data3016->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_data3016->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_data3016->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_data3016->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_data3016->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_data3016->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_data3016->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_data3016->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_data3016->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_data3016->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_data3016->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_data3016);
   
   grae->Draw("ep1 ");
   
   TH1D *h_dummy_copy__16 = new TH1D("h_dummy_copy__16","h_Tot_summary",3,0,3);
   h_dummy_copy__16->SetEntries(6);
   h_dummy_copy__16->SetDirectory(0);
   h_dummy_copy__16->SetStats(0);
   h_dummy_copy__16->SetLineWidth(2);
   h_dummy_copy__16->SetMarkerStyle(20);
   h_dummy_copy__16->SetMarkerSize(1.2);
   h_dummy_copy__16->GetXaxis()->SetBinLabel(1,"3\ell1j");
   h_dummy_copy__16->GetXaxis()->SetBinLabel(2,"3\ell2j");
   h_dummy_copy__16->GetXaxis()->SetBinLabel(3,"3\ell3j");
   h_dummy_copy__16->GetXaxis()->SetBit(TAxis::kLabelsDown);
   h_dummy_copy__16->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__16->GetXaxis()->SetLabelSize(28);
   h_dummy_copy__16->GetXaxis()->SetTitleSize(28);
   h_dummy_copy__16->GetXaxis()->SetTickLength(0.02);
   h_dummy_copy__16->GetXaxis()->SetTitleOffset(2);
   h_dummy_copy__16->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__16->GetYaxis()->SetTitle("Events");
   h_dummy_copy__16->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__16->GetYaxis()->SetLabelSize(28);
   h_dummy_copy__16->GetYaxis()->SetTitleSize(28);
   h_dummy_copy__16->GetYaxis()->SetTickLength(0.02);
   h_dummy_copy__16->GetYaxis()->SetTitleOffset(1.125);
   h_dummy_copy__16->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__16->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__16->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__16->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__16->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__16->Draw("sameaxis");
      tex = new TLatex(0.12,0.8649999,"ATLAS");
tex->SetNDC();
   tex->SetTextFont(73);
   tex->SetTextSize(23);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2084746,0.8649999,"#color[0]{1_Corinth_13_4}");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(23);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.12,0.8149999,"13 TeV, 79.8 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(23);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.53,0.7,0.94,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(23);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("data","Data","ep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("WVZ_stack_8","#it{WVV}","f");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("VH_other_stack_7","Other","f");

   ci = TColor::GetColor("#999999");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("WZ_stack_6","#it{WZ}","f");

   ci = TColor::GetColor("#fe9ccf");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("ZZ_stack_5","#it{ZZ}","f");

   ci = TColor::GetColor("#c48bff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("Zjets_stack_4","Non-prompt","f");

   ci = TColor::GetColor("#57a1f6");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("Zgamma_stack_3","#gamma conv.","f");

   ci = TColor::GetColor("#24a003");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("ttZ_stack_2","#it{t#bar{t}Z}","f");

   ci = TColor::GetColor("#a90f23");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("tWZ_stack_1","#it{WtZ}","f");

   ci = TColor::GetColor("#640169");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("Graph_from_h_Tot_summary","Total uncert.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3354);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   pad0->Modified();
   COMPACT_2jets_summary->cd();
   COMPACT_2jets_summary->Modified();
   COMPACT_2jets_summary->cd();
   COMPACT_2jets_summary->SetSelected(COMPACT_2jets_summary);
}
