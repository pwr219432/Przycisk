object WITAJ: TWITAJ
  Left = 192
  Top = 227
  Width = 350
  Height = 293
  Caption = 'WITAJ'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 80
    Top = 152
    Width = 141
    Height = 25
    Caption = ' WITAJ SWIECIE!'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Arial Narrow'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
  end
  object Przycisk: TButton
    Left = 80
    Top = 24
    Width = 153
    Height = 81
    Cursor = crHandPoint
    Caption = 'Kliknij mnie'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Century'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = PrzyciskClick
  end
end
